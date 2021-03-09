// Copyright Epic Games, Inc. All Rights Reserved.

#include "SurvivalFPSGameMode.h"
#include "SurvivalFPSHUD.h"
#include "SurvivalFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvivalFPSGameMode::ASurvivalFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASurvivalFPSHUD::StaticClass();
}
