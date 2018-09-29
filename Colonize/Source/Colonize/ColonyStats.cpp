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
	return Position;
}

float UColonyStats::SetPosition(float NewPosition)
{
	Position = NewPosition;
	return Position;
}

float UColonyStats::GetLevel()
{
	return Level;
}

float UColonyStats::SetLevel(float NewLevel)
{
	Level = NewLevel;
	return Level;
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

FVector UColonyStats::GetSize()
{
	return Size;
}

FVector UColonyStats::SetSize(FVector NewSize)
{
	Size = NewSize;
	return Size;
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

