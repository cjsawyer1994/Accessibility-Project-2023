// Fill out your copyright notice in the Description page of Project Settings.


#include "SubtitleText.h"
#include "Widgets/Text/STextBlock.h"
#include <SubtitleManager.h>

/**What's going on here? You are calling the subtitle manager to get the text of the desired subtitle, then you are sending it
to your desired widget. In this case, you are creating a custom text object in your UMG Widgets which is specifically used
for subtitles.
This means you can customise your subtitles much more than you could with the default system version. Additionally, if you change
the fonts/styles of other UI, the subtitles won't be affected, which is ideal.*/

#define LOCTEXT_NAMESPACE "SubtitleHook"

USubtitleText::USubtitleText()
{
	bAutoSetTextToSubtitle = true;
	FSubtitleManager::GetSubtitleManager()->OnSetSubtitleText().AddUObject(this, &USubtitleText::OnSubtitleReceived);
}

void USubtitleText::OnSubtitleReceived(const FText& InText)
{
	if (bAutoSetTextToSubtitle)
	{
		SetText(InText);
	}
	OnSubtitleReceivedDelegate.Broadcast(InText);
}

#if WITH_EDITOR
const FText USubtitleText::GetPaletteCategory()
{
	return LOCTEXT("Subtitles", "Subtitles");
}
//Add the "Subtitle Text" class to the UMG Palette for use

void USubtitleText::OnCreationFromPalette()
{
	Text = LOCTEXT("SubtitleTextBlockDefaultValue", "Subtitle");
}
// Set the default value of "Subtitle Text"
#endif
#undef LOCTEXT_NAMESPACE