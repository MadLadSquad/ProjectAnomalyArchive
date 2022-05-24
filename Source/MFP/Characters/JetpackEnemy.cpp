// Fill out your copyright notice in the Description page of Project Settings.


#include "JetpackEnemy.h"

// Sets default values
AJetpackEnemy::AJetpackEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJetpackEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJetpackEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJetpackEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

