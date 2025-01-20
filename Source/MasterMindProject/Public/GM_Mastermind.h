// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_Mastermind.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum Colors
{
	Black UMETA(DisplayName = "BLACK"),
	White UMETA(DisplayName = "WHITE"),
	Red UMETA(DisplayName = "RED"),
	Green UMETA(DisplayName = "GREEN"),
	Blue UMETA(DisplayName = "BLUE"),
	Yellow UMETA(DisplayName = "YELLOW")
};
UCLASS()
class MASTERMINDPROJECT_API AGM_Mastermind : public AGameModeBase
{
	GENERATED_BODY()
	
};
