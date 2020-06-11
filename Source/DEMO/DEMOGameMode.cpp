// Copyright Epic Games, Inc. All Rights Reserved.

#include "DEMOGameMode.h"
#include "DEMOCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADEMOGameMode::ADEMOGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
