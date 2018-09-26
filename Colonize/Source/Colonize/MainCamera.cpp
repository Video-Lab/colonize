// TODO LIST:
// Fix attaching camera to any component/position
// Check for any other bugs


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
	PivotPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PivotPoint"));

	//Variable setup
	DefaultRotation = FRotator(-60.f, 0.f, 0.f);
	Distance = 350.f;

	// Set up spring arm positioning
	SpringArm->AttachTo(PivotPoint);
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
	// Where the new viewport is set every tick 

	FRotator NewYaw = GetActorRotation();
	NewYaw.Yaw += MouseInput.X;
	SetActorRotation(NewYaw);

	FRotator NewPitch = SpringArm->GetComponentRotation();

	// Sets height boundaries to avoid the player bugging the camera by going past the limit
	NewPitch.Pitch = FMath::Clamp(NewPitch.Pitch + MouseInput.Y, -80.f, 0.f);

	SpringArm->SetWorldRotation(NewPitch);

	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Binds controls as specified in engine settings to function definitions in pawn class
	PlayerInputComponent->BindAxis("LookUpDown", this, &AMainCamera::MousePitch);
	PlayerInputComponent->BindAxis("LookLeftRight", this, &AMainCamera::MouseYaw);

}

void AMainCamera::MouseYaw(float value)
{
	MouseInput.Y = value; 

}

void AMainCamera::MousePitch(float value)
{
	MouseInput.X = value;
}

