// Fill out your copyright notice in the Description page of Project Settings.

// TODOS:
// Create colonny blueprint structure
// Adjust for colony creation 
// Adjust for game save
// Adjust for game load

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatform.h"
#include "PlayerStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COLONIZE_API UPlayerStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerStats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	float GetLevel();

	UFUNCTION(BlueprintCallable)
	float SetLevel(float NewLevel);


	UFUNCTION(BlueprintCallable)
	float GetTotalPopulation();

	UFUNCTION(BlueprintCallable)
	float SetTotalPopulation(float NewTotalPopulation);

	UFUNCTION(BlueprintCallable)
	float AddTotalPopulation(float Population);

	UFUNCTION(BlueprintCallable)
	float SubtractTotalPopulation(float Population);


	UFUNCTION(BlueprintCallable)
	float GetTotalCredits();

	UFUNCTION(BlueprintCallable)
	float SetTotalCredits(float NewTotalCredits);

	UFUNCTION(BlueprintCallable)
	float AddTotalCredits(float Credits);

	UFUNCTION(BlueprintCallable)
	float SubtractTotalCredits(float Credits);


	UFUNCTION(BlueprintCallable)
	float GetTotalMarble();

	UFUNCTION(BlueprintCallable)
	float SetTotalMarble(float NewMarble);

	UFUNCTION(BlueprintCallable)
	float AddTotalMarble(float Marble);

	UFUNCTION(BlueprintCallable)
	float SubtractTotalMarble(float Marble);


	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetColonyActors();

	UFUNCTION(BlueprintCallable)
	TArray<AActor*> AddColonyToTrack(AActor* Colony);

	UFUNCTION(BlueprintCallable)
	TArray<AActor*> DeleteColonyToTrack(AActor* Colony);

private:
	float Level;
	float TotalPopulation;
	float TotalCredits;
	float TotalMarble;
	TArray<AActor*> ColonyActors;	
};
