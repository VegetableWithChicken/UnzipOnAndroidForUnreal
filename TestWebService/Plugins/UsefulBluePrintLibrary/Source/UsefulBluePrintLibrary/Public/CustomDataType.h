#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CustomDataType.generated.h"



USTRUCT(BlueprintType)
struct FJsonStructBase :public FTableRowBase {
	GENERATED_USTRUCT_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustommDataType")
		int32 IntegerValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustommDataType")
		float FloatValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustommDataType")
		FString StingValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustommDataType")
		FTransform TransformValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustommDataType")
		TArray<int32> ArrayValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "YourCppStruct")
		TSet<int32> SetValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustommDataType")
		TMap<int32, FString> MapValue;

};
