// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthModifiedDelegate, int, CurrentHealth);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGO_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	int CurrentHealth = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MaxHealth = 1;

	UFUNCTION(BlueprintCallable)
	int AddHealth(int ModHealth);

	UFUNCTION(BlueprintCallable)
	int RemoveHealth(int ModHealth);

	UPROPERTY(BlueprintAssignable)
	FHealthModifiedDelegate HealthModifiedDelegate;

};
