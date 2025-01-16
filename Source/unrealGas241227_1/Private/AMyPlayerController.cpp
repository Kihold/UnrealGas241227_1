// Fill out your copyright notice in the Description page of Project Settings.


#include "AMyPlayerController.h"
#include "unrealGas241227_1/unrealGas241227_1Character.h"
#include "MyHUD.h"

void AAMyPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);


	AHUD* hud = GetHUD();
	if (IsValid(hud))
	{
		AMyHUD* myhud =Cast<AMyHUD>(hud);
		if (IsValid(myhud))
		{
			if (!IsLocalController())
			myhud->CreateHUD();
			myhud->SpawnPlayerStateSetting(Cast<AunrealGas241227_1Character>(aPawn));
		}
	}
}

void AAMyPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();


	AHUD* hud = GetHUD();

	if (IsValid(hud))
	{
		AMyHUD* myhud = Cast<AMyHUD>(hud);
		if (IsValid(myhud))
		{
			if (IsLocalController())
			myhud->CreateHUD();

			myhud->SpawnPlayerStateSetting(Cast<AunrealGas241227_1Character>(GetCharacter()));
		}
	}
}
