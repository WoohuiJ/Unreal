// Copyright Epic Games, Inc. All Rights Reserved.

#include "RhythmPrototypeGameMode.h"
#include "RhythmPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARhythmPrototypeGameMode::ARhythmPrototypeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
