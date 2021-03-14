// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BeyondHumanGameMode.generated.h"

UCLASS(minimalapi)
class ABeyondHumanGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABeyondHumanGameMode();

	virtual void PawnKilled(APawn* PawnKilled);
};



