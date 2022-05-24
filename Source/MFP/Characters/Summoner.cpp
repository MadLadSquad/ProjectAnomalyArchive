// Fill out your copyright notice in the Description page of Project Settings.


#include "Summoner.h"

// Sets default values
ASummoner::ASummoner()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASummoner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASummoner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASummoner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

