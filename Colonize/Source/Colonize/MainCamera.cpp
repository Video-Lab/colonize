// Fill out your copyright notice in the Description page of Project Settings.

#include "MainCamera.h"


// Sets default values
AMainCamera::AMainCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set up spring arm, mesh/pivot point, and camera as subobjects of pawn 
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	DefaultRotation = FRotator(-60.f, 0.f, 0.f);
	Distance = 350.f;

	// Set up spring arm positioning
	SpringArm->AttachTo(RootComponent);
	SpringArm->TargetArmLength = Distance;
	SpringArm->SetWorldRotation(DefaultRotation);

	//Attaches camera to end of spring arm
	Camera->AttachTo(SpringArm, USpringArmComponent::SocketName);

	// Possess the main player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void AMainCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

