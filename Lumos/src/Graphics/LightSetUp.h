#pragma once

#include "LM.h"
#include "Light.h"

namespace Lumos
{

	class LUMOS_EXPORT LightSetup
	{
	public:
		LightSetup();
		~LightSetup();

		void Add(std::shared_ptr<Light>& light);
		void Remove(std::shared_ptr<Light>& light);

		const std::vector<std::shared_ptr<Light >>& GetLights() const { return m_Lights; }
		int GetNumLights() const { return static_cast<int>(m_Lights.size()); }
		void Clear();

		void OnImGUI();

	private:
		std::vector<std::shared_ptr<Light>> m_Lights;
	};
}
