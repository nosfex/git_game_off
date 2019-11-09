// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentAttacher.h"

// Sets default values for this component's properties
UComponentAttacher::UComponentAttacher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComponentAttacher::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponentAttacher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


bool UComponentAttacher::AddRuntimeComponent(TSubclassOf<UActorComponent> NewComponentClass, FName ComponentName)
{
	auto NewComponent = NewObject<UActorComponent>(GetOwner(), NewComponentClass.Get(), ComponentName);
	if (NewComponent == nullptr)
	{
		return false;
	}
	NewComponent->RegisterComponent();
	GetOwner()->AddInstanceComponent(NewComponent);
	return true;
}