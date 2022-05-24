// Fill out your copyright notice in the Description page of Project Settings.


#include "AlienNPC.h"

// Sets default values
AAlienNPC::AAlienNPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAlienNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAlienNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAlienNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

