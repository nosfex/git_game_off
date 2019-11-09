// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


int UHealthComponent::AddHealth(int ModHealth)
{
	CurrentHealth += ModHealth;
	CurrentHealth = FMath::Min<int>(CurrentHealth, MaxHealth);
	HealthModifiedDelegate.Broadcast(CurrentHealth);
	return CurrentHealth;
}

int UHealthComponent::RemoveHealth(int ModHealth)
{
	CurrentHealth -= ModHealth;
	CurrentHealth = FMath::Max<int>(CurrentHealth, 0);
	HealthModifiedDelegate.Broadcast(CurrentHealth);
	return CurrentHealth;
}
