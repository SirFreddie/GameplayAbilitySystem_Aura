// Copyright Luque

#pragma once

#include "CoreMinimal.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "AuraAIController.generated.h"

class UBlackboardComponent;
class UBehaviorTreeComponent;

UCLASS()
class AURA_API AAuraAIController : public AAIController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAuraAIController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TObjectPtr<UBehaviorTreeComponent> BehaviourTreeComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
