// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrosshairTexture;

public:
	//HUD에 대한 주요 드로 콜.
	virtual void DrawHUD() override;
};
