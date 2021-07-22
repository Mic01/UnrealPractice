// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class thomsmichUEPractice : ModuleRules
{
	public thomsmichUEPractice(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
