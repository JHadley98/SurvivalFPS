// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SurvivalFPSHUD.generated.h"

UCLASS()
class ASurvivalFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASurvivalFPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

