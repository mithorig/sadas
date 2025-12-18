#pragma once
#include "framework.h"
#include <list>

namespace global {
	namespace process {
		inline HMODULE hModule;
		inline int64_t qwGameAssembly;
	}

	inline std::list<void(*)()> AdventureModuleController_Update;
}

void Run(HMODULE* phModule);