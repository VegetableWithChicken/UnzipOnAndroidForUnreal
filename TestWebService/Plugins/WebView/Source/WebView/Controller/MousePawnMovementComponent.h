// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "MousePawnMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class WEBVIEW_API UMousePawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//control the forwar,back,left,right move speed,can change it in Mousepawn 
	void SetMoveSpeed(float inSpeed);
private:
	float MoveSpeed = 1000;
};
