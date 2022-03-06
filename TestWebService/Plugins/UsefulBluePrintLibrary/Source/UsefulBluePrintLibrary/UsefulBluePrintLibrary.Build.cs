// Some copyright should be here...

using UnrealBuildTool;
using System.IO;

public class UsefulBluePrintLibrary : ModuleRules
{
	public UsefulBluePrintLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		OptimizeCode = CodeOptimization.InShippingBuildsOnly;

		bEnableUndefinedIdentifierWarnings = false; // 为了修复编译错误
		bEnableExceptions = true; // 启用std的exception，没启用的话后面做字符编码转换的时候，非Windows平台会有编译错误

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				//"Launch"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"zlib",
				"Projects"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
			
			if (Target.Platform == UnrealTargetPlatform.Android)
        {
			PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Launch"
				// ... add any modules that your module loads dynamically here ...
			}
			);
			AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "UsefulBluePrintLibrary.UPL.XML"));
        }
	}
}
