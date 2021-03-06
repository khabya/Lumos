#pragma once

#include "Maths/Maths.h"

namespace Lumos
{
	namespace Graphics
	{
		class Texture2D;
		class TextureCube;
	}

	namespace ImGuiHelpers
	{
		enum class PropertyFlag
		{
			None = 0,
			ColorProperty = 1
		};

		enum Theme
		{
			Black = 0,
			Dark,
			Grey,
			Light,
			Blue,
			ClassicLight,
			ClassicDark,
			Classic,
			Cherry,
			Cinder
		};

		bool Property(const std::string& name, bool& value);
		bool Property(const std::string& name, float& value, float min = -1.0f, float max = 1.0f, PropertyFlag flags = PropertyFlag::None);
		bool Property(const std::string& name, Maths::Vector2& value, PropertyFlag flags);
		bool Property(const std::string& name, Maths::Vector2& value, float min = -1.0f, float max = 1.0f, PropertyFlag flags = PropertyFlag::None);
		bool Property(const std::string& name, Maths::Vector3& value, PropertyFlag flags);
		bool Property(const std::string& name, Maths::Vector3& value, float min = -1.0f, float max = 1.0f, PropertyFlag flags = PropertyFlag::None);
		bool Property(const std::string& name, Maths::Vector4& value, bool exposeW, PropertyFlag flags);
		bool Property(const std::string& name, Maths::Vector4& value, float min = -1.0f, float max = 1.0f, bool exposeW = false, PropertyFlag flags = PropertyFlag::None);

		void Tooltip(const std::string& text);
		void Tooltip(const char* text);

		void Tooltip(Graphics::Texture2D* texture, const Maths::Vector2& size);
		void Tooltip(Graphics::Texture2D* texture, const Maths::Vector2& size, const std::string& text);
		void Image(Graphics::Texture2D* texture, const Maths::Vector2& size);
		void Image(Graphics::TextureCube* texture, const Maths::Vector2& size);

		void SetTheme(Theme theme);

		bool BufferingBar(const char* label, float value, const Maths::Vector2& size_arg, const u32& bg_col, const u32& fg_col);
		bool Spinner(const char* label, float radius, int thickness, const u32& color);

	}
}
