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

	UFUNCTION(BlueprintCallable)
	FVector GetPosition();

	UFUNCTION(BlueprintCallable)
	FVector SetPosition(FVector NewPosition);

	UFUNCTION(BlueprintCallable)
	float GetLevel();

	UFUNCTION(BlueprintCallable)
	float SetLevel(float NewLevel);

	UFUNCTION(BlueprintCallable)
	float GetBaseOutput();

	UFUNCTION(BlueprintCallable)
	float SetBaseOutput(float NewBaseOutput);

	UFUNCTION(BlueprintCallable)
	FString GetType();

	UFUNCTION(BlueprintCallable)
	FString SetType(FString NewType);

	UFUNCTION(BlueprintCallable)
	float GetValue();

	UFUNCTION(BlueprintCallable)
	float SetValue(float NewValue);

	UFUNCTION(BlueprintCallable)
	FVector GetSize();

	UFUNCTION(BlueprintCallable)
	FVector SetSize(FVector NewSize);

	UFUNCTION(BlueprintCallable)
	int GetItemCount();

	UFUNCTION(BlueprintCallable)
	int SetItemCount(int NewItemCount);

	UFUNCTION(BlueprintCallable)
	float GetCredits();

	UFUNCTION(BlueprintCallable)
	float SetCredits(float NewCredits);

	UFUNCTION(BlueprintCallable)
	float GetMarble();

	UFUNCTION(BlueprintCallable)
	float SetMarble(float NewMarble);

private:
	
	UPROPERTY(VisibleAnywhere)
	FVector Position;

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
