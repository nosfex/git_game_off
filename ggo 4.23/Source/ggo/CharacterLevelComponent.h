// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterLevelComponent.generated.h"

class UGGODataLevelUp;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGO_API UCharacterLevelComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterLevelComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(Transient, BlueprintReadOnly)
	int CurrentLevel = 1;

	UPROPERTY(Transient, BlueprintReadOnly)
	int CurrentExperience = 0 ;
	UFUNCTION(BlueprintCallable)
	void AddExperience(int Experience);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UGGODataLevelUp> LevelsData;

	UFUNCTION(BlueprintCallable)
	int GetExperienceRequirement();
};
