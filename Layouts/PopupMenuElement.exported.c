#pragma once

#include <raygui.h>

class LayoutName
{
	public:


	private:
	// TODO: This needs to be cleaned manually leave only declarations here
// Const text
const char *Toggle001Text = "SAMPLE TEXT";    // TOGGLE: Toggle001
const char *ListView002Text = "ONE;TWO;THREE";    // LISTVIEW: ListView002

// Define anchors
Vector2 anchor01 = { 0, 0 };            // ANCHOR ID:1
Vector2 anchor02 = { 0, 40 };            // ANCHOR ID:2

// Define controls variables
bool Toggle001Active = true;            // Toggle: Toggle001
int ListView002ScrollIndex = 0;
int ListView002Active = 0;            // ListView: ListView002

// Define controls rectangles
Rectangle layoutRecs[2] = {
    (Rectangle){ anchor02.x + 0, anchor02.y + 0, 88, 24 },// Toggle: Toggle001
    (Rectangle){ anchor02.x + 0, anchor02.y + 24, 120, 72 },// ListView: ListView002
};
}

///////////////////////////////////////////
// Copy contents above in hpp file
///////////////////////////////////////////

#include <layout_name.h>



// TODO: This needs to be cleaned manually. Definitions go here
// Const text
const char *Toggle001Text = "SAMPLE TEXT";    // TOGGLE: Toggle001
const char *ListView002Text = "ONE;TWO;THREE";    // LISTVIEW: ListView002

// Define anchors
Vector2 anchor01 = { 0, 0 };            // ANCHOR ID:1
Vector2 anchor02 = { 0, 40 };            // ANCHOR ID:2

// Define controls variables
bool Toggle001Active = true;            // Toggle: Toggle001
int ListView002ScrollIndex = 0;
int ListView002Active = 0;            // ListView: ListView002

// Define controls rectangles
Rectangle layoutRecs[2] = {
    (Rectangle){ anchor02.x + 0, anchor02.y + 0, 88, 24 },// Toggle: Toggle001
    (Rectangle){ anchor02.x + 0, anchor02.y + 24, 120, 72 },// ListView: ListView002
};


// TODO: Auto-generated drawing calls. Move to main loop.
/*
// Draw controls
GuiToggle(layoutRecs[0], Toggle001Text, &Toggle001Active);
GuiListView(layoutRecs[1], ListView002Text, &ListView002ScrollIndex, &ListView002Active);
*/
