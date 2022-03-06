// Fill out your copyright notice in the Description page of Project Settings.

#include "HttpServerActor.h"
#include "HTTPServer/Public/HttpPath.h"

#include "HTTPServer/Public/HttpResultCallback.h"
#include "HTTPServer/Public/HttpServerRequest.h"
#include "HTTPServer/Public/HttpServerResponse.h"
#include "Core/Public/Modules/ModuleManager.h"

// Sets default values
AHttpServerActor::AHttpServerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bClosed = false;
}

// Called when the game starts or when spawned
void AHttpServerActor::BeginPlay()
{
	Super::BeginPlay();

	Server = &FHttpServerModule::Get();
	UE_LOG(LogTemp, Log, TEXT("BeginHttpServer"));

	FHttpPath HttpPath(TEXT("/Script")); // 指定(http://127.0.0.1/Script
	Router = Server->GetHttpRouter(1080);  // 使用

	RouteHandle = Router->BindRoute(
		HttpPath,
		EHttpServerRequestVerbs::VERB_GET | EHttpServerRequestVerbs::VERB_POST,
		[this](const FHttpServerRequest &Request, const FHttpResultCallback &OnComplete) {
		UE_LOG(LogTemp, Log, TEXT("BindRoute"));
		
		FUTF8ToTCHAR WByteBuffer(reinterpret_cast<const ANSICHAR *>(Request.Body.GetData()), Request.Body.Num());
		FString str = WByteBuffer.Get();

		UE_LOG(LogTemp, Log, TEXT("%s"), *str);

		// http://127.0.0.1/test_api?abc=123&name=hello
		for (auto param : Request.QueryParams)
		{
			UE_LOG(LogTemp, Log, TEXT("%s->%s"), *param.Key, *param.Value);
		}

		if (OnRequestReceived.IsBound())
		{
			OnRequestReceived.Broadcast(str);
		}

		OnComplete(FHttpServerResponse::Ok());

		return true;
	});

	Server->StartAllListeners();
}

void AHttpServerActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (bClosed)
	{
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("Stop HTTP"));
	Server->StopAllListeners();
	Server->HasPendingListeners();
	if (Router)
	{
		Router->UnbindRoute(RouteHandle);
	}
	bClosed = true;
}

// Called every frame
void AHttpServerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}