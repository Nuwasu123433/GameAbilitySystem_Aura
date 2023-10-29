// Copyright Nuwasu & Sumeshi


#include "Player/AuraPlayerController.h"
#include <LightWeightInstanceBlueprintFunctionLibrary.generated.h>

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraContext);
	
}
