#pragma once
#include "Feature.h"

namespace cheat::feature
{
	class StatModifier : public Feature
	{
	public:
		bool f_CritRate;
		float f_CritRateValue;

		static StatModifier& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

	private:
		StatModifier();
	};
}