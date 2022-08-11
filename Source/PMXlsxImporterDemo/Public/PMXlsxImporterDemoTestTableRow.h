// Copyright Anya Builders. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
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
	bool bBool;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	float Float;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	uint8 Byte;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int32 Integer;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int64 Integer64;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FString String;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FText Text;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	EPMTestEnumUInt8 Enum;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FPrimaryAssetType AssetType;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FPrimaryAssetId AssetId;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FDateTime DateTime;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	TArray<int32> IntArray;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FColor Color;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FVector2D Struct;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX, SplitStructInXLSX))
	FPMXlsxImporterDemoTestStruct SplitStruct;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	TArray<FVector2D> StructArray;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX, SplitStructInXLSX))
	TArray<FPMXlsxImporterDemoTestStruct> SplitStructArray;
};
