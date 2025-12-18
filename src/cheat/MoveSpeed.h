#pragma once
#include "Feature.h"

namespace cheat::feature
{
	class MoveSpeed : public Feature
	{
	public:
		bool f_MoveSpeed;
		float f_MoveSpeedValue;

		static MoveSpeed& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

	private:
		MoveSpeed();
	};
}
