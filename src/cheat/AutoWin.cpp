#include <pch.h>
#include <appdata/helpers.h>
#include "AutoWin.h"
#include "main.h"

namespace cheat::feature
{
	AutoWin& AutoWin::GetInstance()
	{
		static AutoWin instance;
		return instance;
	}

	AutoWin::AutoWin() : Feature()
	{
	}

	const FeatureGUIInfo& AutoWin::GetGUIInfo() const
	{
		static const FeatureGUIInfo info{ "Auto Win", "World", false };
		return info;
	}

	static void KillAll()
	{
		auto adventureModuleController = GET_SINGLETON(AdventureModuleController);
		if (adventureModuleController == nullptr)
			return;

		auto monsterActors = TO_UNI_LIST(app::AdventureModuleController_get_monsterActors(adventureModuleController, nullptr), app::LogicEntity*);
		if (monsterActors == nullptr)
			return;

		// Create a zero iFP
		// Assuming 0 is 0 in fixed point
		auto zeroFP = (app::FP)0;
		// If explicit conversion needed, might need op_Implicit. 
		// But let's assume we can get a zero iFP via casting or default init if possible.
		// However, app::iFP is likely a struct wrapper.
		// Let's rely on app::iFP_op_Implicit which we saw in StatModifier.
		auto zero = app::iFP_op_Implicit(zeroFP, nullptr);

		for (auto monster : *monsterActors)
		{
			auto monsterActor = CastTo<app::AdventureActor>(monster, *app::AdventureActor__TypeInfo);
			if (monsterActor == nullptr)
				continue;

			auto health = monsterActor->fields.actorHealthInfo;
			if (health == nullptr || !health->fields._isAlive)
				continue;

			app::ActorHealthInfo_set_hp(health, zero, nullptr);
		}
	}

	void AutoWin::DrawMain()
	{
		if (ImGui::Button("Kill All Enemies"))
		{
			KillAll();
		}
	}
}
