// Copyright Epic Games, Inc. All Rights Reserved.

#include "gasha1GameMode.h"
#include "gasha1Character.h"
#include "UObject/ConstructorHelpers.h"

Agasha1GameMode::Agasha1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
