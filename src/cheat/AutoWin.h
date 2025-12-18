#pragma once
#include "Feature.h"

namespace cheat::feature
{
	class AutoWin : public Feature
	{
	public:
		static AutoWin& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

	private:
		AutoWin();
	};
}
