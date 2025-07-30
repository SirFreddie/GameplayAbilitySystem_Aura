// Copyright Luque


#include "AI/AuraAIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"


// Sets default values
AAuraAIController::AAuraAIController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("BlackboardComponent");
	check(Blackboard);
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviourComponent");
	check(BehaviourTreeComponent);
}

// Called when the game starts or when spawned
void AAuraAIController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

