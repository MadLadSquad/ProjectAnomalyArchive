// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class MFPServerTarget : TargetRules
{
	public MFPServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;

		bUsesSteam = true;
		bUseLoggingInShipping = true;

		GlobalDefinitions.Add("UE4_PROJECT_STEAMPRODUCTNAME=\"Spacewar\"");
		GlobalDefinitions.Add("UE4_PROJECT_STEAMGAMEDESC=\"EPICMFP\"");
		GlobalDefinitions.Add("UE4_PROJECT_STEAMGAMEDIR=\"Spacewar\"");
		GlobalDefinitions.Add("UE4_PROJECT_STEAMSHIPPINGID=480");

		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("MFP");
	}
}
