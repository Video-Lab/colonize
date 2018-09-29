// Fill out your copyright notice in the Description page of Project Settings.

#include "ColonyStats.h"


// Sets default values for this component's properties
UColonyStats::UColonyStats(float Position, float Level, float BaseOutput, FString Type, float Value, FVector Size, int ItemCount, float Credits, float Marble)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Owner = Owner->GetOwner();

	UColonyStats::Position = Position;
	UColonyStats::Level = Level;
	UColonyStats::BaseOutput = BaseOutput;
	UColonyStats::Type = Type;
	UColonyStats::Value = Value;
	UColonyStats::Size = Size;
	UColonyStats::ItemCount = ItemCount;
	UColonyStats::Credits = Credits;
	UColonyStats::Marble = Marble;

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

float UColonyStats::GetPosition()
{
	return 0.0f;
}

float UColonyStats::SetPosition(float NewPosition)
{
	return 0.0f;
}

float UColonyStats::GetLevel()
{
	return 0.0f;
}

float UColonyStats::SetLevel(float NewLevel)
{
	return 0.0f;
}

float UColonyStats::GetBaseOutput()
{
	return 0.0f;
}

float UColonyStats::SetBaseOutput(float NewBaseOutput)
{
	return 0.0f;
}

FString UColonyStats::GetType()
{
	return FString();
}

FString UColonyStats::SetType(FString NewType)
{
	return FString();
}

float UColonyStats::GetValue()
{
	return 0.0f;
}

float UColonyStats::SetValue(float NewValue)
{
	return 0.0f;
}

FVector UColonyStats::GetSize()
{
	return FVector();
}

FVector UColonyStats::SetSize(float NewSize)
{
	return FVector();
}

int UColonyStats::GetItemCount()
{
	return 0;
}

int UColonyStats::SetItemCount(float NewItemCount)
{
	return 0;
}

float UColonyStats::GetCredits()
{
	return 0.0f;
}

float UColonyStats::SetCredits(float NewCredits)
{
	return 0.0f;
}

float UColonyStats::GetMarble()
{
	return 0.0f;
}

float UColonyStats::SetMarble(float NewMarble)
{
	return 0.0f;
}

