// Copyright Epic Games, Inc. All Rights Reserved.

#include "AccessibilityProjGameMode.h"
#include "AccessibilityProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAccessibilityProjGameMode::AAccessibilityProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
