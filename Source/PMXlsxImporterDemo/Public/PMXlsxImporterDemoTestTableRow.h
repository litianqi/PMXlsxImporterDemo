// Copyright Anya Builders. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PMXlsxImporterDemoTestData.h"
#include "Engine/DataTable.h"
#include "UObject/Object.h"
#include "PMXlsxImporterDemoTestTableRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PMXLSXIMPORTERDEMO_API FPMXlsxImporterDemoTestTableRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	bool bBool = false;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	float Float = 0.f;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	uint8 Byte = 0;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int32 Integer = 0;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int64 Integer64 = 0;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FString String;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FText Text;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	EPMTestEnumUInt8 Enum = EPMTestEnumUInt8::EnumUInt8_Zero;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FPrimaryAssetType AssetType;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FPrimaryAssetId AssetId;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FDateTime DateTime;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	TArray<int32> IntArray;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FColor Color = FColor::Black;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FVector2D Struct = FVector2D::ZeroVector;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX, SplitStructInXLSX))
	FPMXlsxImporterDemoTestStruct SplitStruct;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	TArray<FVector2D> StructArray;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX, SplitStructInXLSX))
	TArray<FPMXlsxImporterDemoTestStruct> SplitStructArray;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX, GameplayTagFilter="Ability"))
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX, GameplayTagFilter="Ability"))
	FGameplayTagContainer TagContainer;
};
