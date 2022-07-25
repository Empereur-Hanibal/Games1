// Copyright Epic Games, Inc. All Rights Reserved.

#include "engineGameMode.h"
#include "engineCharacter.h"
#include "UObject/ConstructorHelpers.h"

AengineGameMode::AengineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
