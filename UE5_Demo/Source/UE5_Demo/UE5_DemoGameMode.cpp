// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_DemoGameMode.h"
#include "UE5_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_DemoGameMode::AUE5_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
