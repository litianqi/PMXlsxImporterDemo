#include "PMXlsxImporterDemoTestData.h"
#include "PMXlsxImporterContextLogger.h"

#ifdef WITH_EDITOR
void UPMXlsxImporterDemoTestData::ValidateImpl(FPMXlsxImporterContextLogger& InOutErrors) const
{
	Super::ValidateImpl(InOutErrors);

	if (StartTime >= EndTime)
	{
		InOutErrors.Logf(TEXT("StartTime %s must be before EndTime %s"), *StartTime.ToString(), *EndTime.ToString());
	}
}

void UPMXlsxImporterDemoTestData::ValidateAgainstPreviousImpl(const UPMXlsxDataAsset* Previous, FPMXlsxImporterContextLogger& InOutErrors) const
{
	Super::ValidateAgainstPreviousImpl(Previous, InOutErrors);

	if (Previous == nullptr)
	{
		return;
	}

	const UPMXlsxImporterDemoTestData* PrevTestData = Cast<UPMXlsxImporterDemoTestData>(Previous);
	if (StartTime < PrevTestData->EndTime)
	{
		InOutErrors.Logf(TEXT("StartTime (%s) must be after EndTime of %s (%s)"),
						 *StartTime.ToString(),
						 *PrevTestData->GetName(),
						 *PrevTestData->EndTime.ToString());
	}
}
#endif