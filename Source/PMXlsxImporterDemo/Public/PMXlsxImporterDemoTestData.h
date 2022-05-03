#pragma once

#include "CoreMinimal.h"
#include "PMXlsxDataAsset.h"
#include "PMXlsxImporterDemoTestData.generated.h"

UENUM()
enum class EPMTestEnumUInt8 : uint8
{
	EnumUInt8_Zero,
	EnumUInt8_One,
	EnumUInt8_Two,
	MAX
};

UENUM()
enum class EPMTestEnumInt32 : int32
{
	EnumInt32_Zero,
	EnumInt32_One,
	EnumInt32_Two,
	MAX
};

UCLASS()
class PMXLSXIMPORTERDEMO_API UPMXlsxImporterDemoTestData : public UPMXlsxDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	bool bBool;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	float Float;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	double Double;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int8 Integer8;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	uint8 UInteger8;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int16 Integer16;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	uint16 UInteger16;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int32 Integer32;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	uint32 UInteger32;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	int64 Integer64;

	// uint64 is not supported

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FDateTime StartTime;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FDateTime EndTime;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FString String;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FText Text;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	EPMTestEnumUInt8 EnumUInt8;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	EPMTestEnumInt32 EnumInt32;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FPrimaryAssetType AssetType;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	FPrimaryAssetId AssetId;

	UPROPERTY(EditAnywhere, Meta=(ImportFromXLSX))
	TArray<int32> IntArray;

protected:

#ifdef WITH_EDITOR
	virtual void ValidateImpl(FPMXlsxImporterContextLogger& InOutErrors) const override;
	virtual void ValidateAgainstPreviousImpl(const UPMXlsxDataAsset* Previous, FPMXlsxImporterContextLogger& InOutErrors) const override;
#endif

};
