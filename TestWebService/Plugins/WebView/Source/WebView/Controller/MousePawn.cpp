// Fill out your copyright notice in the Description page of Project Settings.


#include "MousePawn.h"
#include "MousePawnMovementComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"

// Sets default values
AMousePawn::AMousePawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);
	MousePawnMovementComponent = CreateDefaultSubobject<UMousePawnMovementComponent>(TEXT("MousePawnMovementComponent"));
	check(MousePawnMovementComponent);
	
	MousePawnMovementComponent->UpdatedComponent = Scene;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	FollowCamera= CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	CameraBoom->SetupAttachment(Scene);
	CameraBoom->TargetArmLength = 400;
	CameraBoom->bUsePawnControlRotation = 1.0;
	bUseControllerRotationYaw = 0;
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}


// Called when the game starts or when spawned
void AMousePawn::BeginPlay()
{
	Super::BeginPlay();
	CustomInput = CreatePlayerInputComponent();
	SetupPlayerInputComponent(CustomInput);
	SetupCustomInputComponent();
	MousePawnMovementComponent->SetMoveSpeed(MoveSpeed);
}

// Called every frame
void AMousePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMousePawn::SetupCustomInputComponent()
{
	check(CustomInput);
	GEngine->AddOnScreenDebugMessage(0, 0.2, FColor::Blue,TEXT("SetupPlayerInputComponent"));
	CustomInput->BindAxis("Forward", this, &AMousePawn::MoveForward);
	CustomInput->BindAxis("Back", this, &AMousePawn::MoveBack);
	CustomInput->BindAxis("Left", this, &AMousePawn::MoveLeft);
	CustomInput->BindAxis("Right", this, &AMousePawn::MoveRight);
	CustomInput->BindAxis("WheelAxis", this, &AMousePawn::WheelAxis);
	CustomInput->BindAxis("Yaw", this, &AMousePawn::Yaw);
	CustomInput->BindAxis("Pitch", this, &AMousePawn::Pitch);

}
void AMousePawn::WheelAxis(float amount)
{
	if (amount)
	SmoothTargetSpringLength(amount);
}

void AMousePawn::MoveForward(float amount)
{
	if (amount)
	{
		
		GEngine->AddOnScreenDebugMessage(0, 0.2, FColor::Blue, TEXT("MoveForward"));
		FVector fwd = UKismetMathLibrary::GetForwardVector(FRotator(0, 0, GetControlRotation().Yaw));
		GetMovementComponent()->AddInputVector(fwd*amount * MoveSpeed);
		
	}
}

void AMousePawn::MoveBack(float amount)
{
	if (amount)
	{
		GEngine->AddOnScreenDebugMessage(0, 0.2, FColor::Blue, TEXT("MoveBack"));
		FVector Bac= UKismetMathLibrary::GetForwardVector(FRotator(0, 0, GetControlRotation().Yaw));
		GetMovementComponent()->AddInputVector(Bac*amount * MoveSpeed);
	}
}

void AMousePawn::MoveLeft(float amount)
{
	if (amount)
	{
		GEngine->AddOnScreenDebugMessage(0, 0.2, FColor::Blue, TEXT("MoveLeft"));
		FVector Rig= UKismetMathLibrary::GetRightVector(FRotator(0, 0, GetControlRotation().Yaw));
		//AddMovementInput(Rig, amount);
		if (MousePawnMovementComponent)
		{
			GEngine->AddOnScreenDebugMessage(0, 0.2, FColor::Blue, TEXT("goodmovement"));
			MousePawnMovementComponent->AddInputVector(Rig*amount* MoveSpeed);

		}
		else
		{
			GEngine->AddOnScreenDebugMessage(0, 0.2, FColor::Blue, TEXT("badmovement"));
		}
	}
}

void AMousePawn::MoveRight(float amount)
{
	if (amount)
	{
		GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("MoveRight"));
		FVector Rig = UKismetMathLibrary::GetRightVector(FRotator(0, 0, GetControlRotation().Yaw));
		//AddMovementInput(Rig, amount);
		GetMovementComponent()->AddInputVector(Rig*amount * MoveSpeed);
	}
}
void AMousePawn::Yaw(float amount)
{
	if (amount)
	{
		// AddControllerYawInput()函数用于改变控制器的Yaw变量，即增加纵向轴旋转量。
		// GetWorld()函数取得世界指针UWorld*，通过世界指针调用GetDeltaSeconds()取得每帧耗费的时间。
		// 之所以要乘以每帧耗费的时间，是为了使得每一【秒】都增加200.0f * amount的改变量。
		// 如果不乘以每帧耗费的时间，那么每一【帧】都会增加200.0f * amount的改变量。（注意由于每秒渲染量不同，所以每秒的帧数不一定是固定的。）
		// 通过帧数来控制变量，那么游戏看起来就不那么流畅。试想，机子性能好的时候游戏角色动作就迅速，机子性能差的时候游戏角色动作就慢，这对于玩家公平吗？
		AddControllerYawInput(45.f * amount * GetWorld()->GetDeltaSeconds());
	}
}

// 下面的函数与上面雷同，不再赘述
void AMousePawn::Pitch(float amount)
{
	if (Controller && amount)
	{
		AddControllerPitchInput(45.f * amount * GetWorld()->GetDeltaSeconds());
	}
}

UPawnMovementComponent* AMousePawn::GetMovementComponent() const
{
	 return MousePawnMovementComponent;
}
void AMousePawn::SmoothTargetSpringLength(float amount)
{
	UE_LOG(LogTemp, Warning, TEXT("--%f"), amount);
	 //UKismetMathLibrary::InRange(）
	float CurrentLength= CameraBoom->TargetArmLength;
	float ChangLength= MaxTargetArmLength *(MouseCurve->GetFloatValue(CurrentLength / MaxTargetArmLength)-amount * SmootRate);
	ChangLength =UKismetMathLibrary::FClamp(ChangLength, MinTargetArmLength, MaxTargetArmLength);
	CameraBoom->TargetArmLength = UKismetMathLibrary::FInterpTo(CurrentLength, ChangLength,GetWorld()->GetDeltaSeconds(), 1.0);
	//CameraBoom->TargetArmLength=TargetLength;
	UE_LOG(LogTemp, Warning, TEXT("--%f"), CameraBoom->TargetArmLength);
	
}

