// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterLevelComponent.h"
#include "GGODataLevelUp.h"

// Sets default values for this component's properties
UCharacterLevelComponent::UCharacterLevelComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterLevelComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCharacterLevelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCharacterLevelComponent::AddExperience(int Experience)
{
	CurrentExperience += Experience;
	UGGODataLevelUp* LevelData = LevelsData.Get();
	int NettedExperience = CurrentExperience - LevelData->LevelsDescriptors[CurrentLevel].ExperienceRequired;
	if (NettedExperience >= 0)
	{
		CurrentLevel++;
		CurrentExperience = 0;
		AddExperience(NettedExperience);
	}
}

int UCharacterLevelComponent::GetExperienceRequirement()
{
	UGGODataLevelUp* LevelData = LevelsData.Get();
	return LevelData->LevelsDescriptors[CurrentLevel].ExperienceRequired;
}