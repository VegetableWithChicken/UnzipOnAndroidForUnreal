// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Styling/SlateTypes.h"
#include "Components/WidgetSwitcherSlot.h"
#include "WebBase.generated.h"
class UWebViewObject;
/**
 * , BlueprintType, hidecategories = (Object)
 */
//UCLASS()
UCLASS(Abstract)
class WEBVIEW_API UWebBase : public UWidget
{
	GENERATED_UCLASS_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateLoad, int, state);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrlChanged, const FText&, Url);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnJsStr, const FString&, Type, FString, JSON, const FString&, FuncName);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeforePopup, FString, Url, FString, Frame);
public:
	/** this party is blueprint delegate params */
	UPROPERTY()
	UWebViewObject* _ViewObject;// 保存UE4与Js的通信数据
	/** Called when loading stat changed */
	UPROPERTY(BlueprintAssignable, Category = "Web View|Event")
	FOnStateLoad OnLoadState;
	/** Called when the Url changes. */
	UPROPERTY(BlueprintAssignable, Category = "Web View|Event")
	FOnUrlChanged OnUrlChanged;
	// Called with ue.interface.broadcast(name, data) in the browser context.
	UPROPERTY(BlueprintAssignable, Category = "Web View|Event")
	FOnJsStr OnJsEventStr;
	/** Called when a popup is about to spawn. */
	UPROPERTY(BlueprintAssignable, Category = "Web View|Event")
	FOnBeforePopup OnBeforePopup;

	/** this party is blueprint editor params */
	/** URL that the browser will initially navigate to. The URL should include the protocol, eg http:// */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Initial URL"), Category = "Web View")
		FString urlInitial;
	/** Configure webpage  mouse is transparency */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Enable Transparency"), Category = "Web View")
		bool bEnableTransparency = false;
	/** Control and Editor show text style  */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Text Style", UIMin = 0, UIMax = 1), Category = "Web View|Show Head")
		FTextBlockStyle  styleText;
	/** popup a menu using right mouse in web page */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Show Popup Menu", UIMin = 0, UIMax = 1), Category = "Web View|Show Head")
		bool RightKeyPopup;
	/** Whether to show an address bar. */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Switch Input Method", UIMin = 0, UIMax = 1), Category = "Web View")
		bool  SwitchInputMethod = false;
	/** Configure webpage flush frame rate */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Frame Rate", ClampMin = 30, ClampMax = 60), Category = "Web View")
		int  RateFrame = 30;
	/** Configure webpage is transparency */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Background Color"), Category = "Web View")
		FColor  ColorBackground;
	/** Whether to show an address bar. */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Show Address", UIMin = 0, UIMax = 1), Category = "Web View|Show Head")
		bool  addressShow = false;
	/** Whether to show standard controls like Back, Forward, Reload etc. */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Show Controls", UIMin = 0, UIMax = 1), Category = "Web View|Show Head")
		bool  controlShow = false;
protected:
	FString jsWindow;// for javescrit 
	TSharedPtr<class SCefBrowser> CefCoreWidget; // for slate core widget
private:

public:
	/**
	* Executes a JavaScript string in the context of the web page
	* @param ScriptText JavaScript string to execute
	*/
	UFUNCTION(BlueprintCallable, Category = "Web View")
		void ExecuteJavascript(const FString& ScriptText);

	/**
	 * Load the specified URL
	 * @param NewURL New URL to load
	 */
	UFUNCTION(BlueprintCallable, Category = "Web View")
		void LoadURL(FString NewURL);

	UFUNCTION(BlueprintCallable, Category = "Web View", meta = (AdvancedDisplay = "Data", AutoCreateRefTerm = "Data"))
		void CallJsonStr(const FString& Function, const FString& Data);

	/**
	 * Expose a UObject instance to the browser runtime.
	 * Properties and Functions will be accessible from JavaScript side.
	 * As all communication with the rendering procesis asynchronous, return values (both for properties and function results) are wrapped into JS Future objects.
	 * @param Name The name of the object.
	 *        The object will show up as window.ue4.{Name} on the javascript side.
	 *        If there is an existing object of the same name, this object will replace it. If bIsPermanent is false and there is an existing permanent binding, the permanent binding will be restored when the temporary one is removed.
	 * @param Object The object instance.
	 * @param bIsPermanent If true, the object will be visible to all pages loaded through this browser widget,
	 *        otherwise, it will be deleted when navigating away from the current page.
	 *        Non-permanent bindings should be registered from inside an OnLoadStarted event handler in order to be available before JS code starts loading.
	 */
	UFUNCTION(BlueprintCallable, Category = "Web View", meta = (AdvancedDisplay = "Name|Object"))
		void BindUObject(const FString& Name, UObject* Object, bool bIsPermanent = true);

	/**
	 * Remove an existing script binding registered by BindUObject.
	 * @param Name The name of the object to remove.
	 * @param Object The object will only be removed if it is the same object as the one passed in.
	 * @param bIsPermanent Must match the bIsPermanent argument passed to BindUObject.
	 */
	UFUNCTION(BlueprintCallable, Category = "Web View", meta = (AdvancedDisplay = "Name|Object"))
		void UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent = true);


	/**
	* Gets the currently loaded URL.
	* @return The URL, or empty string if no document is loaded.
	*/
	UFUNCTION(BlueprintCallable, Category = "Web View")
		FString GetUrl() const;

public:

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

	FString JSWindow();

protected:
	virtual void SetJSOjbect(UWebViewObject* object) {};
protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	void CallBrowser(TFunction<void(TSharedPtr<class SCefBrowser>&)>& fun);
	inline void HandleOnLoadState(const int state);
	void HandleOnUrlChanged(const FText& Text);
	bool HandleOnBeforePopup(FString URL, FString Frame);


};
