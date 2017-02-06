#pragma once

#include "Font.h"
#include <vector>

namespace sl { namespace graphics {

	class FontManager {
	private:
		static std::vector<Font*> s_Fonts;
		static math::vec2 s_Scale;
	public:
		static void Init();

		static void SetScale(const math::vec2& scale);
		static inline const math::vec2& GetScale() { return s_Scale; }

		static void Add(Font* font);
		static Font* Get();
		static Font* Get(const std::string& name);
		static void Clean();
	private:
		FontManager() { }
	};

}}