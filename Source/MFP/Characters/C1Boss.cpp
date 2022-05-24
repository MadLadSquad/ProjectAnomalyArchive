// Fill out your copyright notice in the Description page of Project Settings.


#include "C1Boss.h"

// Sets default values
AC1Boss::AC1Boss()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC1Boss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC1Boss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC1Boss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

