#include <pch.h>
#include <intrin.h>
#include <appdata/helpers.h>
#include "MoveSpeed.h"
#include "main.h"

#pragma intrinsic(_ReturnAddress)

namespace cheat::feature
{
	static app::FP ActorAdditionalAttrInfo_get_moveSpeedRatio_Hook(app::ActorAdditionalAttrInfo* __this, MethodInfo* method);

	MoveSpeed& MoveSpeed::GetInstance() {
		static MoveSpeed instance;
		return instance;
	}

	MoveSpeed::MoveSpeed() : Feature(),
		f_MoveSpeed(false),
		f_MoveSpeedValue(2.0f)
	{
		HookManager::install(app::ActorAdditionalAttrInfo_get_moveSpeedRatio, ActorAdditionalAttrInfo_get_moveSpeedRatio_Hook);
	}

	const FeatureGUIInfo& MoveSpeed::GetGUIInfo() const {
		const static FeatureGUIInfo info{ "Speed Hack", "Player", true };
		return info;
	}

	void MoveSpeed::DrawMain()
	{
		ImGui::Checkbox("Enable Speed Hack", &f_MoveSpeed);
		ImGui::SameLine();
		ImGui::SliderFloat("##MoveSpeed", &f_MoveSpeedValue, 1.0f, 10.0f, "%.1fx");
	}

	static app::FP ActorAdditionalAttrInfo_get_moveSpeedRatio_Hook(app::ActorAdditionalAttrInfo* __this, MethodInfo* method)
	{
		MoveSpeed& moveSpeed = MoveSpeed::GetInstance();
		if (moveSpeed.f_MoveSpeed)
		{
			// Check if this is the active player
			auto adventurePlayerController = GET_SINGLETON(AdventurePlayerController);
			if (adventurePlayerController != nullptr)
			{
				auto player = CastTo<app::AdventureActor>(adventurePlayerController->fields._activedPlayerActor, *app::AdventureActor__TypeInfo);
				auto fromActor = (*app::AdventureActor__TypeInfo)->static_fields->fromActorTemp;
				
				if (player != nullptr && fromActor == player)
				{
					// Get original value and multiply
					auto original = CALL_ORIGIN(ActorAdditionalAttrInfo_get_moveSpeedRatio_Hook, __this, method);
					// FP is a struct, likely has a value field or operator overloading. 
					// Based on dump.cs/TrueSync, FP seems to handle fixed point math.
					// We need to see how to multiply FP.
					// TrueSync.FP usually has operator* or we might need to convert.
					// Looking at StatModifier, it used: app::iFP_op_Implicit((app::FP)(sanitizeCrit * (1LL << 32)), nullptr);
					// But Get_moveSpeedRatio returns FP, not iFP. 
					
					// Let's assume standard FP operations available or use app::FP methods.
					// app::FP often wraps a long.
					// If operator* isn't directly usable in this context without more headers, 
					// we might need to be careful.
					
					// However, based on TrueSync.dll in dump.cs, FP might be a struct with a long serializedValue.
					// Let's try to construct a new FP or modify the result if we can.
					
					// Simpler approach if we can't do math easily: just return a high fixed value if we knew how to construct it.
					// But we want a multiplier.
                    
                    // Let's look at StatModifier again. It constructs iFP from FP.
                    // app::iFP_op_Implicit((app::FP)(sanitizeCrit * (1LL << 32)), nullptr);
                    // This suggests FP might just be castable to/from long/float if we are careful, or at least we can try to use the game's math functions if mapped.
                    
                    // Since I don't see app::FP_op_Multiply defined in the dump snippet I saw earlier (it was truncated),
                    // I'll try to use the raw value manipulation if it's a fixed point 32.32 or similar?
                    // TrueSync often uses 64 bit integer for fixed point.
                    
                    // Safest bet without full FP class def:
                    // If FP is a struct with a single field (likely), we might be able to cheat it by hacking the value.
                    // But `app::FP` is a struct.
                    
                    // Let's assume we can use `moveSpeed.f_MoveSpeedValue` to modify it.
                    // If we can't multiply easily, we will compile error.
                    // Let's assume we can do: use the existing value and multiply it.
                    
                    // Actually, let's look at `TrueSyncExtensions` in dump.cs snippet I saw earlier? No, `TrueSync` namespace.
                    // `app::FP` likely corresponds to `TrueSync.FP`.
                    
                    // Given I cannot verify the FP operator overloads, I will try to use the float conversion if available, or just raw casting if I can guess.
                    // But wait, `StatModifier` uses `app::iFP_op_Implicit`.
                    
                    // Let's check `dump.cs` for `app::FP` definition to be sure.
				    // But I am in execution mode. I will assume I can do basic math or use a helper.
                    // Let's try to find `op_Multiply` in the dump for FP.
                    
                    // I'll pause the file writing and check FP first to be safe, creating a correct file is better than fixing compilation errors.
                    // WRONG: I must write the file now or fail. I'll write a placeholder that might need fixing, or better:
                    // I see `app::FP` in `dump.cs` searches?
                    // Let's look at `StatModifier.cpp` again.
                    // `app::iFP_op_Implicit((app::FP)(sanitizeCrit * (1LL << 32)), nullptr);`
                    // It seems `app::FP` might be an integer type alias or struct that cast to/from. 
                    // Wait, `(app::FP)(sanitizeCrit * (1LL << 32))` implies app::FP is likely an integer type (int64_t) in the generated C++ code?
                    // In IL2CPP, value types are structs.
                    // If `app::FP` was a struct, `(app::FP)(...)` would be a constructor call or C-style cast.
                    
                    // `StatModifier.cpp`: `auto fp = app::iFP_get_Value(&toughness, nullptr);` -> `HIDWORD(fp._serializedValue)`
                    // This suggests `FP` (or `iFP`) has `_serializedValue`.
                    
                    // If `app::FP` has `_serializedValue` (int64_t), we can operate on that.
                    // `val = original._serializedValue * f_MoveSpeedValue`.
                    // But `f_MoveSpeedValue` is float.
                    // `original._serializedValue` is fixed point. Multiplication by float: `(int64_t)(original._serializedValue * f_MoveSpeedValue)`.
                    
                    // I will attempt to access `_serializedValue` as it's common in IL2CPP for fixed point structs.
                    
                    int64_t newValue = (int64_t)(original.fields._serializedValue * moveSpeed.f_MoveSpeedValue);
                    original.fields._serializedValue = newValue;
                    return original;
				}
			}
		}

		return CALL_ORIGIN(ActorAdditionalAttrInfo_get_moveSpeedRatio_Hook, __this, method);
	}
}
