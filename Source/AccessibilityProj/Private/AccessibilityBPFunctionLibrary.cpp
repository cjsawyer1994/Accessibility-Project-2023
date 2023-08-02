// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/UserInterfaceSettings.h"
#include "AccessibilityBPFunctionLibrary.h"

void UAccessibilityBPFunctionLibrary::UpdateUIScale(float Scale) {
	UUserInterfaceSettings* UISettings = GetMutableDefault<UUserInterfaceSettings>
		(UUserInterfaceSettings::StaticClass());

	if (IsValid(UISettings))
		UISettings->ApplicationScale = Scale;
}