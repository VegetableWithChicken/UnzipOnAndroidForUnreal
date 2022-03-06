// Fill out your copyright notice in the Description page of Project Settings.


#include "WebBase.h"
#include "SCefBrowser.h"
#include "Async/Async.h"
#include "WebViewObject.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Async/TaskGraphInterfaces.h"
#include "UObject/ConstructorHelpers.h"
#include "Misc/ConfigCacheIni.h"

#if WITH_EDITOR
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Materials/MaterialExpressionTextureSample.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "Materials/MaterialFunction.h"
#include "Factories/MaterialFactoryNew.h"
#include "AssetRegistryModule.h"
#include "PackageHelperFunctions.h"
#endif

#define LOCTEXT_NAMESPACE "WebBase"


/////////////////////////////////////////////////////
// UWebBase

UWebBase::UWebBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, styleText(FTextBlockStyle::GetDefault())
	, ColorBackground(255, 255, 255, 255)
	, jsWindow(TEXT("ue"))
{
	bIsVariable = true;
	Visibility = ESlateVisibility::SelfHitTestInvisible;
	GConfig->GetString(TEXT("WebView"), TEXT("window"), jsWindow, GGameIni);
	styleText.ColorAndOpacity = FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f));
	styleText.Font.Size = 20;
	bIsVariable = true;
}

void UWebBase::LoadURL(FString NewURL)
{
	if (!CefCoreWidget.IsValid())return;
	return CefCoreWidget->LoadURL(NewURL);
}

void UWebBase::ExecuteJavascript(const FString& ScriptText)
{
	if (!CefCoreWidget.IsValid())return;
	return CefCoreWidget->ExecuteJavascript(ScriptText);
}

void UWebBase::CallJsonStr(const FString& Function, const FString& Data)
{
	if (!CefCoreWidget.IsValid() || Function.IsEmpty() || Function == TEXT("synccallue"))
		return;
	FString TextScript;
	if (Data.Len() >= 2) {
		TextScript = FString::Printf(TEXT("%s.interface['%s'](%s)"),
			*jsWindow, *Function, *Data);
	}
	else {
		TextScript = FString::Printf(TEXT("%s.interface['%s']()"),
			*jsWindow, *Function);
	}
	CefCoreWidget->ExecuteJavascript(TextScript);

}

FString UWebBase::GetUrl() const {
	if (!CefCoreWidget.IsValid())return FString();
	return CefCoreWidget->GetUrl();
}

void UWebBase::BindUObject(const FString& VarName, UObject* Object, bool bIsPermanent) {
	if (!CefCoreWidget.IsValid())return;
	CefCoreWidget->BindUObject(VarName, Object, bIsPermanent);
}

void UWebBase::UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent) {
	if (!CefCoreWidget.IsValid())return;
	CefCoreWidget->UnbindUObject(Name, Object, bIsPermanent);
}

void UWebBase::ReleaseSlateResources(bool bReleaseChildren) {
	Super::ReleaseSlateResources(bReleaseChildren);
	CefCoreWidget.Reset();
}

TSharedRef<SWidget> UWebBase::RebuildWidget() {
	CefCoreWidget = SNew(SCefBrowser)
		.ShowAddressBar(addressShow)
		.InitialURL(urlInitial)
		.BackgroundColor(ColorBackground)
		.ShowControls(controlShow)
		.RightKeyPopup(RightKeyPopup)
		.BrowserFrameRate(RateFrame)
		.TextStyle(styleText)
		.EnableMouseTransparency(bEnableTransparency)
		.SwitchInputMethod(SwitchInputMethod)
		.ViewportSize(GetDesiredSize())
		.Visibility(EVisibility::SelfHitTestInvisible)
		.OnUrlChanged_UObject(this, &UWebBase::HandleOnUrlChanged)
		.OnBeforePopup_UObject(this, &UWebBase::HandleOnBeforePopup)
		.OnLoadState_UObject(this, &UWebBase::HandleOnLoadState);
	_ViewObject = NewObject<UWebViewObject>();// 隔离JS和UE4之间的数据。
	if (_ViewObject) {
		BindUObject("interface", _ViewObject);
		SetJSOjbect(_ViewObject);
	}
	return CefCoreWidget.ToSharedRef();
}

inline void UWebBase::CallBrowser(TFunction<void(TSharedPtr<class SCefBrowser>&)>& fun) {
	if (!CefCoreWidget.IsValid())return;
	fun(CefCoreWidget);
}

void UWebBase::HandleOnUrlChanged(const FText& InText) {
	OnUrlChanged.Broadcast(InText);
}

void UWebBase::HandleOnLoadState(const int state) {
	OnLoadState.Broadcast(state);
}

bool UWebBase::HandleOnBeforePopup(FString URL, FString Frame) {
	if (!OnBeforePopup.IsBound()) return false;
	if (IsInGameThread()) {
		OnBeforePopup.Broadcast(URL, Frame);
		return true;
	}
	// Retry on the GameThread.
	TWeakObjectPtr<UWebBase> WeakThis = this;
	AsyncTask(ENamedThreads::GameThread, [WeakThis, URL, Frame]() {
		if (!WeakThis.IsValid()) return;
		WeakThis->HandleOnBeforePopup(URL, Frame);
		});
	return true;

}

#if WITH_EDITOR
const FText UWebBase::GetPaletteCategory() {
	return LOCTEXT("Experimental", "Experimental");
}
#endif

FString UWebBase::JSWindow() {
	return jsWindow;
}

#undef LOCTEXT_NAMESPACE






