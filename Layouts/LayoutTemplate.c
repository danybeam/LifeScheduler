#pragma once

#include <raygui.h>

class $(GUILAYOUT_NAME_PASCALCASE)
{
	public:
$(GUILAYOUT_FUNCTION_DECLARATION_C)

	private:
	// TODO: This needs to be cleaned manually leave only declarations here
$(GUILAYOUT_INITIALIZATION_C)
}

///////////////////////////////////////////
// Copy contents above in hpp file
///////////////////////////////////////////

#include <$(GUILAYOUT_NAME).h>

$(GUILAYOUT_FUNCTION_DEFINITION_C)

// TODO: This needs to be cleaned manually. Definitions go here
$(GUILAYOUT_INITIALIZATION_C)


// TODO: Auto-generated drawing calls. Move to main loop.
/*
$(GUILAYOUT_DRAWING_C)
*/
