#include <LifeScheduler/PopupMenuElement.h>
#include <raygui.h>


LifeScheduler::View::PopupMenuElement::PopupMenuElement()
{
	Toggle001Text = "SAMPLE TEXT";    // TOGGLE: Toggle001
	ListView002Text = "ONE;TWO;THREE";    // LISTVIEW: ListView002

	// Define anchors
	anchor01 = { 0, 0 };            // ANCHOR ID:1

	// Define controls variables
	Toggle001Active = false;            // Toggle: Toggle001
	ListView002ScrollIndex = 0;
	ListView002Active = 0;            // ListView: ListView002

	// Define controls rectangles
	layoutRecs[0] = raylib::Rectangle(anchor01.x + 0, anchor01.y + 40, 88, 24);// Toggle: Toggle001
	layoutRecs[1] = raylib::Rectangle(anchor01.x + 0, anchor01.y + 64, 120, 72);// ListView: ListView002

}

LifeScheduler::View::PopupMenuElement::PopupMenuElement(Vector2& anchor) :
	anchor01(anchor)
{
	Toggle001Text = "SAMPLE TEXT";    // TOGGLE: Toggle001
	ListView002Text = "ONE;TWO;THREE";    // LISTVIEW: ListView002

	// Define controls variables
	Toggle001Active = false;            // Toggle: Toggle001
	ListView002ScrollIndex = 0;
	ListView002Active = 0;            // ListView: ListView002

	// Define controls rectangles
	layoutRecs[0] = raylib::Rectangle(anchor01.x + 0, anchor01.y + 40, 88, 24);// Toggle: Toggle001
	layoutRecs[1] = raylib::Rectangle(anchor01.x + 0, anchor01.y + 64, 120, 72);// ListView: ListView002
}

LifeScheduler::View::PopupMenuElement::PopupMenuElement(Vector2& anchor, std::string& buttonText, std::string& menuOptions) :
	anchor01(anchor),
	Toggle001Text(buttonText),
	ListView002Text(menuOptions)
{
	// Define controls variables
	Toggle001Active = false;            // Toggle: Toggle001
	ListView002ScrollIndex = 0;
	ListView002Active = 0;            // ListView: ListView002

	// Define controls rectangles
	layoutRecs[0] = raylib::Rectangle(anchor01.x + 0, anchor01.y + 40, 88, 24);// Toggle: Toggle001
	layoutRecs[1] = raylib::Rectangle(anchor01.x + 0, anchor01.y + 64, 120, 72);// ListView: ListView002
}

LifeScheduler::View::PopupMenuElement::~PopupMenuElement()
{
}

void LifeScheduler::View::PopupMenuElement::Update()
{
}

void LifeScheduler::View::PopupMenuElement::Draw()
{
	// Draw controls
	GuiToggle(layoutRecs[0], Toggle001Text.c_str(), &Toggle001Active);
	if (Toggle001Active)
	{
		ListView002Active = -1;
		GuiListView(layoutRecs[1], ListView002Text.c_str(), &ListView002ScrollIndex, &ListView002Active);
		if (ListView002Active >= 0)
		{
			Toggle001Active = false;
		}
	}
}
