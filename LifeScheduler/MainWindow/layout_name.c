#pragma once

#include <raygui.h>

class LayoutName
{
	public:


	private:
	// TODO: This needs to be cleaned manually leave only declarations here
// Const text
const char *DropdownBox000Text = "File";    // DROPDOWNBOX: DropdownBox000

// Define anchors
Vector2 anchor01 = { 0, 0 };            // ANCHOR ID:1

// Define controls variables
bool DropdownBox000EditMode = false;
int DropdownBox000Active = 0;            // DropdownBox: DropdownBox000

// Define controls rectangles
Rectangle layoutRecs[1] = {
    (Rectangle){ anchor01.x + 0, anchor01.y + 0, 120, 24 },// DropdownBox: DropdownBox000
};
}

///////////////////////////////////////////
// Copy contents above in hpp file
///////////////////////////////////////////

#include <layout_name.h>



// TODO: This needs to be cleaned manually. Definitions go here
// Const text
const char *DropdownBox000Text = "File";    // DROPDOWNBOX: DropdownBox000

// Define anchors
Vector2 anchor01 = { 0, 0 };            // ANCHOR ID:1

// Define controls variables
bool DropdownBox000EditMode = false;
int DropdownBox000Active = 0;            // DropdownBox: DropdownBox000

// Define controls rectangles
Rectangle layoutRecs[1] = {
    (Rectangle){ anchor01.x + 0, anchor01.y + 0, 120, 24 },// DropdownBox: DropdownBox000
};


// TODO: Auto-generated drawing calls. Move to main loop.
/*
// Draw controls
if (DropdownBox000EditMode) GuiLock();

if (GuiDropdownBox(layoutRecs[0], DropdownBox000Text, &DropdownBox000Active, DropdownBox000EditMode)) DropdownBox000EditMode = !DropdownBox000EditMode;

GuiUnlock();
*/
