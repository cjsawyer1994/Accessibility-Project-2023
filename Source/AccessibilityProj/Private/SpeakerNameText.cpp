// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeakerNameText.h"
#include "Widgets/Text/STextBlock.h"
#include <SubtitleManager.h>

#define LOCTEXT_NAMESPACE "SubtitleHook"

#include "SpeakerNameText.h"
/*Expand this functionality here, the system currently works via BP*/




#if WITH_EDITOR
const FText USpeakerNameText::GetPaletteCategory()
{
	return LOCTEXT("Speaker Name", "Subtitles");
}

void USpeakerNameText::OnCreationFromPalette()
{
	Text = LOCTEXT("SpeakerNameTextBlockDefaultValue", "");
}
#endif
#undef LOCTEXT_NAMESPACE