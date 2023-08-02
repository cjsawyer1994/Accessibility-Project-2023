// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccessibilityBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ACCESSIBILITYPROJ_API UAccessibilityBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


		UFUNCTION(BlueprintCallable)
		static void UpdateUIScale(float Scale);
	

};



