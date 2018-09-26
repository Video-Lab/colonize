// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "GameFramework/Pawn.h"
#include "MainCamera.generated.h"

UCLASS()
class COLONIZE_API AMainCamera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MouseYaw(float value);
	void MousePitch(float value);

	UPROPERTY(EditAnywhere)
		USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
		float Distance;

	UPROPERTY(EditAnywhere)
		FRotator DefaultRotation;

	UCameraComponent* Camera;

	// For pivot point
	UStaticMeshComponent* Mesh; 

	FVector2D MouseInput;
	
	
};
