// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "SubtitleText.generated.h"

/**

 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleReceived, const FText&, InSubtitle);

UCLASS()
class ACCESSIBILITYPROJ_API USubtitleText : public UTextBlock
{
	GENERATED_BODY()

public:

	USubtitleText();

	UFUNCTION()
		void OnSubtitleReceived(const FText& InText);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Subtitles")
		bool bAutoSetTextToSubtitle;

#if WITH_EDITOR
	//~ Begin UWidget Interface
	virtual const FText GetPaletteCategory() override;
	virtual void OnCreationFromPalette() override;
	//~ End UWidget Interface
#endif

	UPROPERTY(BlueprintAssignable, Category = "Subtitles")
		FOnSubtitleReceived OnSubtitleReceivedDelegate;
};
