// Fill out your copyright notice in the Description page of Project Settings.

#include "ColonyStats.h"


// Sets default values for this component's properties
UColonyStats::UColonyStats()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


}




// Called when the game starts
void UColonyStats::BeginPlay()
{
	Super::BeginPlay();

	// Set position & size of actor
	
}


// Called every frame
void UColonyStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FVector UColonyStats::GetPosition()
{
	return Position;
}

FVector UColonyStats::SetPosition(FVector NewPosition)
{
	Position = NewPosition;
	return Position;
}

float UColonyStats::GetBaseOutput()
{
	return BaseOutput;
}

float UColonyStats::SetBaseOutput(float NewBaseOutput)
{
	BaseOutput = NewBaseOutput;
	return BaseOutput;
}

FString UColonyStats::GetType()
{
	return Type;
}

FString UColonyStats::SetType(FString NewType)
{
	Type = NewType;
	return Type;
}

float UColonyStats::GetValue()
{
	return Value;
}

float UColonyStats::SetValue(float NewValue)
{
	Value = NewValue;
	return Value;
}

int UColonyStats::GetItemCount()
{
	return ItemCount;
}

int UColonyStats::SetItemCount(int NewItemCount)
{
	ItemCount = NewItemCount;
	return ItemCount;
}

float UColonyStats::GetCredits()
{
	return Credits;
}

float UColonyStats::SetCredits(float NewCredits)
{
	Credits = NewCredits;
	return Credits;
}

float UColonyStats::GetMarble()
{
	return Marble;
}

float UColonyStats::SetMarble(float NewMarble)
{
	Marble = NewMarble;
	return Marble;
}

