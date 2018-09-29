// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"\
#include "Components/ActorComponent.h"
#include "ColonyStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COLONIZE_API UColonyStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UColonyStats(float, float, float, FString, float, FVector, int, float, float);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
		AActor* Owner;

	float Position;
	float Level;
	float BaseOutput;
	FString Type;
	float Value;
	FVector Size;
	int ItemCount;
	float Credits;
	float Marble;
};
