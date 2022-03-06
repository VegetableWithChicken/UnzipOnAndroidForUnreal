// Copyright aSurgingRiver, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#ifdef JSON_LIB
#include "JsonLibrary.h"
#endif
#include "WebViewObject.generated.h"

//class UCefWidget;
class UWebViewWidget;

UCLASS()
class WEBVIEW_API UWebViewObject : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Web View")
	void SyncCallUe(const FString& Name, const FString& Data, const FString& Callback);

	void SetUMG(UWebViewWidget* InWidget);
private:
	TWeakObjectPtr<UWebViewWidget> UMG;
};


