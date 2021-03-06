// Copyright Epic Games, Inc. All Rights Reserved.

#include "BeyondHumanGameMode.h"
#include "BeyondHumanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABeyondHumanGameMode::ABeyondHumanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABeyondHumanGameMode::PawnKilled(APawn* PawnKilled)
{

}
