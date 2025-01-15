// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAS241227_1_API UUHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//BlueprintImplementableEvent 블루프린트에서 코드 구현
	//BlueprintCallalbe 블루프린트에서 C++함수 호출 가능
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void SetPlayer(class AunrealGas241227_1Character* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentHealth(float CurrentHealth);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxHealth(float MaxHealth);
};
