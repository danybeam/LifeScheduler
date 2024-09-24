#include <raylib-cpp.hpp>

#define RAYGUI_IMPLEMENTATION
#include <raygui.h>
#include <libLifeSchedulerFramework/Item.h>
#include <queue>
#include <LifeScheduler/WindowScene.h>

using namespace LifeScheduler;

int main()
{
	InitWindow(400, 200, "raygui - controls test suite");
	SetTargetFPS(60);

	LifeScheduler::View::WindowScene testElement;

	while (!WindowShouldClose())
	{
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
		testElement.Draw();
		EndDrawing();
	}

	CloseWindow();
	return 0;
}