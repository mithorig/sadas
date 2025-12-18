#pragma once
#include "Feature.h"

namespace cheat::feature
{
	class MobVacuum : public Feature
	{
	public:
		bool f_MobVacuum;
		bool f_AggroOnly;
		float f_Distance;

		static MobVacuum& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

	private:
		MobVacuum();
	};
}