#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "SpeakerNameText.generated.h"

/**
 *
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNameReceived, const FText&, InName);

UCLASS()
class ACCESSIBILITYPROJ_API USpeakerNameText : public UTextBlock
{
	GENERATED_BODY()

public:



#if WITH_EDITOR
	//~ Begin UWidget Interface
	virtual const FText GetPaletteCategory() override;
	virtual void OnCreationFromPalette() override;
	//~ End UWidget Interface
#endif

	UPROPERTY(BlueprintAssignable, Category = "Subtitles")
		FOnNameReceived OnNameReceivedDelegate;

};