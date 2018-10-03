// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "ColonyStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COLONIZE_API UColonyStats : public UActorComponent
{
	
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UColonyStats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	float GetPosition();
	float SetPosition(float NewPosition);
	float GetLevel();
	float SetLevel(float NewLevel);
	float GetBaseOutput();
	float SetBaseOutput(float NewBaseOutput);
	FString GetType();
	FString SetType(FString NewType);
	float GetValue();
	float SetValue(float NewValue);
	FVector GetSize();
	FVector SetSize(FVector NewSize);
	int GetItemCount();
	int SetItemCount(int NewItemCount);
	float GetCredits();
	float SetCredits(float NewCredits);
	float GetMarble();
	float SetMarble(float NewMarble);

private:
	
	UPROPERTY(VisibleAnywhere)
	float Position;

	UPROPERTY(VisibleAnywhere)
		float Level = 1.f;

	UPROPERTY(VisibleAnywhere)
		float BaseOutput = 10.f;

	UPROPERTY(VisibleAnywhere)
		FString Type = "normal";

	UPROPERTY(VisibleAnywhere)
		float Value = 10.f;

	UPROPERTY(VisibleAnywhere)
		FVector Size;

	UPROPERTY(VisibleAnywhere)
		int ItemCount = 1;

	UPROPERTY(VisibleAnywhere)
		float Credits = 10.f;

	UPROPERTY(VisibleAnywhere)
		float Marble = 0.f;


};
