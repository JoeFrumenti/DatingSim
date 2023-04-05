// Fill out your copyright notice in the Description page of Project Settings.


#include "IceControllerCPP.h"

// Sets default values
AIceControllerCPP::AIceControllerCPP()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIceControllerCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIceControllerCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AIceControllerCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

