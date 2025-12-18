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

		for (auto monster : *monsterActors)
		{
			auto monsterActor = CastTo<app::AdventureActor>(monster, *app::AdventureActor__TypeInfo);
			if (monsterActor == nullptr)
				continue;

			auto health = monsterActor->fields.actorHealthInfo;
			if (health == nullptr || !health->fields._isAlive)
				continue;

			// Directly set _isAlive to false to kill the monster
			health->fields._isAlive = false;
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
