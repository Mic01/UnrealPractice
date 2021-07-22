// Copyright Epic Games, Inc. All Rights Reserved.

#include "thomsmichUEPracticeGameMode.h"
#include "thomsmichUEPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthomsmichUEPracticeGameMode::AthomsmichUEPracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
