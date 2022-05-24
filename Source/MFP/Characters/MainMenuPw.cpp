// Copyright Stanislav Vasilev. All rights reserved.


#include "MainMenuPw.h"





// Sets default values
AMainMenuPw::AMainMenuPw()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void AMainMenuPw::BeginPlay()
{
	Super::BeginPlay();
	
	//auto result = discord::Core::Create(697420452712284202, DiscordCreateFlags_Default, &disc::core);
	//discord::Activity activity{};
	//discord::ActivityAssets activityAssets{};
	//activity.SetState("Pre-Alpha Testing");
	//activity.SetDetails("Main Menu");
	//activity.GetAssets().SetLargeImage("alogo");
	//activity.GetAssets().SetLargeText("Project Anomaly");
	//disc::core->ActivityManager().UpdateActivity(activity, [](discord::Result result) {});
}

// Called every frame
void AMainMenuPw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//disc::core->RunCallbacks();
}

// Called to bind functionality to input
void AMainMenuPw::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

