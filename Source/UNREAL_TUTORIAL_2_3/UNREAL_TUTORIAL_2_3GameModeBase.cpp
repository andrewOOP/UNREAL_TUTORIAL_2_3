// Fill out your copyright notice in the Description page of Project Settings.

#include "UNREAL_TUTORIAL_2_3GameModeBase.h"

void AUNREAL_TUTORIAL_2_3GameModeBase::StartPlay() {

	Super::StartPlay();
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
	}
}

