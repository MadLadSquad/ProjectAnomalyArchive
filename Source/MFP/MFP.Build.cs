// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;

public class MFP : ModuleRules
{
    public MFP(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AIModule", "AISupportModule", "UMG", "OnlineSubsystem", "OnlineSubsystemSteam" });
        PublicIncludePaths.Add("F:/UE4/UnrealEngine/Projects/ProjectAnomaly/Source/MFP/Discord");

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
		 PublicAdditionalLibraries.Add("F:/UE4/UnrealEngine/Projects/ProjectAnomaly/Binaries/Win64/discord_game_sdk.dll.lib");
		}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
		    PublicAdditionalLibraries.Add("F:/UE4/UnrealEngine/Projects/ProjectAnomaly/Binaries/Linux/discord_game_sdk.so");
		}
		else
		{

		}
    }
}
