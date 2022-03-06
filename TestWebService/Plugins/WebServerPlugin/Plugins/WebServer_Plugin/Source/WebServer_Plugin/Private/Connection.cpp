// Fill out your copyright notice in the Description page of Project Settings.


#include "Connection.h"

/*void UConnection::RegisterHTMLResponses()
{
	RegisteredHTMLResponses.Add("/", "<!DOCTYPE html><html><body><h1>My First Web Server</h1><p>You have been served.</p></body></html>");
	RegisteredHTMLResponses.Add("/callback", "<!DOCTYPE html><html><body><h1>Callback</h1><p>Code is {{code}}</p></body></html>");
}*/

void UConnection::Initialize(FSocket *Socket, TArray<uint8> ReceivedData)
{
	ConnectionSocket = Socket;
	RequestDetails = UHTTPMessageLibrary::ParseRawRequest(ReceivedData);
}

void UConnection::SendResponse()
{
	CreateAndSendMessage();
}

void UConnection::SendResponseWithDetails(FSHTTPResponseDetails Details)
{
	ResponseDetails = Details;

	CreateAndSendMessage();
}

void UConnection::SendSimpleHTMLResponse(int32 ResponseCode, FString HTML)
{
	ResponseDetails.m_Code = ResponseCode;
	ResponseDetails.m_Headers.Add("Content-Type", "text/html");

	ResponseDetails.m_Body = UDataConversionLibrary::ConvertStringToByteArray(HTML, true);

	CreateAndSendMessage();
}
void UConnection::ReadLocalHTMLFile(FString inRelativePath)
{
#if PLATFORM_WINDOWS
	FString ReadPath = FPaths::ProjectDir() + "Content/WebServerRoot/" + inRelativePath;
#endif//PLATFORM_WINDOWS
#if PLATFORM_ANDROID
	//FString ReadPath = TEXT("/sdcard/UE4Game/TestWebService/TestWebService/") + inRelativePath;
	FString ReadPath = FPaths::ProjectDir() + "Content/WebServerRoot/" + inRelativePath;
#endif//PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("Read in %s"), *ReadPath);
	FString HTMLData;
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ReadPath))
	{
		FFileHelper::LoadFileToString(HTMLData, *ReadPath);
		UE_LOG(LogTemp, Warning, TEXT("HTTPServer load file is : %s"), *HTMLData);
		SendSimpleHTMLResponse(200, HTMLData);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("HTTPServer FileExists is false"));
		return;
	}
}

void UConnection::CreateAndSendMessage()
{
	TArray<uint8> ResponseByteArray = UHTTPMessageLibrary::BuildRawResponse(ResponseDetails);

	int32 BytesSent;
	ConnectionSocket->Send(ResponseByteArray.GetData(), ResponseByteArray.Num(), BytesSent);
	ConnectionSocket->Close();
}