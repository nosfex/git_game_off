// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGODataLevelUp.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpDescriptor {
	GENERATED_BODY()

	int ExperienceRequired;
};
/**
 * 
 */
UCLASS(BlueprintType)
class GGO_API UGGODataLevelUp : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLevelUpDescriptor> LevelsDescriptors;
};
