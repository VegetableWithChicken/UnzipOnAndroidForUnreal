// Copyright aSurgingRiver, Inc. All Rights Reserved.

#include "WebViewObject.h"
#include "WebViewWidget.h"


void UWebViewObject::SyncCallUe(const FString& Name, const FString& Data, const FString& Callback)
{
	if (!UMG.IsValid())
		return;
#ifdef JSON_LIB
	if (UMG->OnJsEvent.IsBound()){
		UMG->OnJsEvent.Broadcast(Name, FJsonLibraryValue::Parse(Data), Callback);
	}
#endif
	if (UMG->OnJsEventStr.IsBound()) {
		UMG->OnJsEventStr.Broadcast(Name, Data, Callback);
	}
}

void UWebViewObject::SetUMG(UWebViewWidget* InUMG){
	UMG = InUMG;// StaticCast<UWebViewWidget*>(InWidget);
}