// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "twinStickShooterGameMode.h"
#include "twinStickShooterPawn.h"

AtwinStickShooterGameMode::AtwinStickShooterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AtwinStickShooterPawn::StaticClass();
}

