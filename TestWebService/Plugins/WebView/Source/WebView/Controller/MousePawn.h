// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "MousePawn.generated.h"

UCLASS()
class WEBVIEW_API AMousePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMousePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual UPawnMovementComponent* GetMovementComponent() const override;
	// Called to bind functionality to input
	void SetupCustomInputComponent();
	void MoveForward(float amount);
	void MoveBack(float amount);
	void MoveLeft(float amount);
	void MoveRight(float amount);
	void Yaw(float amount);
	void Pitch(float amount);
	void WheelAxis(float amount);
	//update TargetSpringLength
	void SmoothTargetSpringLength(float amount);

protected:
	UPROPERTY(BlueprintType,EditAnywhere, BlueprintReadWrite)
	class USpringArmComponent* CameraBoom = nullptr;
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* FollowCamera = nullptr;
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* Scene = nullptr;
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
		class UCurveFloat* MouseCurve;
	class UInputComponent* CustomInput = nullptr;
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
	class UMousePawnMovementComponent* MousePawnMovementComponent = nullptr;

	protected:
		/**Adjust the speed of camera smoothing*/
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
	float SmootRate = 1.0;
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
		float MoveSpeed = 1000.0;
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
	float MinTargetArmLength = 300.0;
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite)
	float MaxTargetArmLength = 10000.0;

	

};
