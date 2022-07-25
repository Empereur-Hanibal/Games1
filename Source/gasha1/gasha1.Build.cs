// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class gasha1 : ModuleRules
{
	public gasha1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
