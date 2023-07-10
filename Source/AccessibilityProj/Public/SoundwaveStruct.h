// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundwaveStruct.generated.h"

/**
 * 
 */

 // An enum that allows users to assign a type of audio to the sound file
UENUM(BlueprintType)
enum EAudioCategory
{
	Dialogue UMETA(DisplayName = "Dialogue"),
	Music UMETA(DisplayName = "Music"),
	SFX UMETA(DisplayName = "Sound Effect")
};


USTRUCT(BlueprintType)
struct ACCESSIBILITYPROJ_API FSoundwaveStruct : public FTableRowBase
{
	
public:

	GENERATED_BODY()

	//Set the desired audio file
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Subtitles")
		USoundWave* Soundwave;
	//Set the speaker name for the soundwave
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Subtitles")
		FText SpeakerName;
	//Set the category of sound
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Subtitles")
		TEnumAsByte<EAudioCategory> AudioCategory;
	//Set the subtitles
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Subtitles")
		TArray<struct FSubtitleCue> Subtitles;


	FSoundwaveStruct();
	~FSoundwaveStruct();
};
