// Copyright aSurgingRiver, Inc. All Rights Reserved.
#include "WebViewWidget.h"
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

#define LOCTEXT_NAMESPACE "WebViewWidget"

/////////////////////////////////////////////////////
// UWebViewWidget

UWebViewWidget::UWebViewWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


void UWebViewWidget::SetJSOjbect(UWebViewObject* object) {
	object->SetUMG(this);
}

/////////////////////////////////////////////////////
#ifdef JSON_LIB
void UWebViewWidget::Call(const FString& Function, const FJsonLibraryValue& Data)
{
	if (!CefCoreWidget.IsValid() || Function.IsEmpty() || Function == TEXT("synccallue"))
		return;
	FString ScriptText;
	if (Data.GetType() != EJsonLibraryType::Invalid) {
		ScriptText = FString::Printf(TEXT("%s.interface[%s](%s)"),
			*jsWindow, *FJsonLibraryValue(Function).Stringify(),
			*Data.Stringify());
	}
	else {
		ScriptText = FString::Printf(TEXT("%s.interface[%s]()"),
			*jsWindow, *FJsonLibraryValue(Function).Stringify());
	}
	CefCoreWidget->ExecuteJavascript(ScriptText);
}
#endif
#undef LOCTEXT_NAMESPACE
