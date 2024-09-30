#pragma once

#include <raylib-cpp.hpp>
#include <string>
#include <LifeScheduler/IWindowElement.h>

namespace LifeScheduler::View
{
	class PopupMenuElement : public LifeScheduler::View::IWindowElement
	{
	public:
		PopupMenuElement();
		PopupMenuElement(Vector2& anchor);
		PopupMenuElement(Vector2& anchor, std::string& buttonText, std::string& menuOptions);
		virtual ~PopupMenuElement();

		virtual void Update() override;
		virtual void Draw() override;

	private:
		// Const text
		std::string Toggle001Text;    // TOGGLE: Toggle001
		std::string ListView002Text;    // LISTVIEW: ListView002

		// Define anchors
		Vector2 anchor01 = { 0, 0 };            // ANCHOR ID:1

		// Define controls variables
		bool Toggle001Active;            // Toggle: Toggle001
		int ListView002ScrollIndex;
		int ListView002Active;            // ListView: ListView002

		// Define controls rectangles
		raylib::Rectangle layoutRecs[2];
	};
}