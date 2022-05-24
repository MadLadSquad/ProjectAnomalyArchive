// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MFPTarget : TargetRules
{
	public MFPTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		bUsesSteam = true;
		bUseLoggingInShipping = true;

		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("MFP");
	}
}
