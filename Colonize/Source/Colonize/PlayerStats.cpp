// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerStats.h"


// Sets default values for this component's properties
UPlayerStats::UPlayerStats()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerStats::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

struct Colony
{
	FTransform ColonyTransform;
	float Test2;
};

float UPlayerStats::GetLevel()
{
	return Level;
}

float UPlayerStats::SetLevel(float NewLevel)
{
	Level = NewLevel;
	return Level;
}

float UPlayerStats::GetTotalPopulation()
{
	return TotalPopulation;
}

float UPlayerStats::SetTotalPopulation(float NewTotalPopulation)
{
	TotalPopulation = NewTotalPopulation;
	return TotalPopulation;
}

float UPlayerStats::AddTotalPopulation(float Population)
{
	TotalPopulation += Population;
	return TotalPopulation;
}

float UPlayerStats::SubtractTotalPopulation(float Population)
{
	TotalPopulation -= Population;
	return TotalPopulation;
}

float UPlayerStats::GetTotalCredits()
{
	return TotalCredits;
}

float UPlayerStats::SetTotalCredits(float NewTotalCredits)
{
	TotalCredits = NewTotalCredits;
	return TotalCredits;
}

float UPlayerStats::AddTotalCredits(float Credits)
{
	TotalCredits += Credits;
	return Credits;
}

float UPlayerStats::SubtractTotalCredits(float Credits)
{
	TotalCredits -= Credits;
	return TotalCredits;
}

float UPlayerStats::GetTotalMarble()
{
	return TotalMarble;
}

float UPlayerStats::SetTotalMarble(float NewMarble)
{
	TotalMarble = NewMarble;
	return TotalMarble;
}

float UPlayerStats::AddTotalMarble(float Marble)
{
	TotalMarble += Marble;
	return TotalMarble;
}

float UPlayerStats::SubtractTotalMarble(float Marble)
{
	TotalMarble -= Marble;
	return TotalMarble;
}


