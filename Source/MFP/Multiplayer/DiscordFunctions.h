// Copyright Stanislav Vasilev. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../Discord/discord.h"
#include "DiscordFunctions.generated.h"


UENUM()
enum RoleType
{
	CREATOR,
	MODERATOR,
	PRE_ALPHA_TESTER,
	ALPHA_TESTER,
	BETA_TESTER,
	RELEASE
};


/**
 * 
 */
UCLASS()
class MFP_API UDiscordFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	RoleType roleType;

	UFUNCTION(BlueprintCallable, Category = "Discord Util")
	static void RunCallBacksToDisc();

	UFUNCTION(BlueprintCallable, Category = "Discord Util")
	static void RunPresence(FString Player, int64 EndTime, bool bShouldHaveEndTime);

	//UFUNCTION(BlueprintCallable, Category = "Discord Util")
	static RoleType CheckRole();

	UFUNCTION(BlueprintCallable, Category = "Discord Util")
	static int SetRoleType();
};
