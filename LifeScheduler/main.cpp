#include <raylib-cpp.hpp>

#define RAYGUI_IMPLEMENTATION
#include <raygui.h>
#include <libLifeSchedulerFramework/Item.h>
#include <queue>

using namespace LifeScheduler;

int main()
{
	InitWindow(400, 200, "raygui - controls test suite");
	SetTargetFPS(60);

	bool showMessageBox = false;
	std::string name1 = "first";
	std::string name2 = "second";
	std::string name3 = "third";
	Item item1(name1,1);
	Item item2(name2,1);
	Item item3(name3,2);
	item2.AddWorkUnits(69);

	std::priority_queue<Item> queue;
	queue.push(item2);
	queue.push(item1);
	queue.push(item3);

	std::string test("");
	while (!queue.empty()) {
		Item iter = queue.top();
		queue.pop();
		test = test + iter.GetName() + " priority: " + std::to_string(iter.GetPriority()) + " worked units: " + std::to_string(iter.GetWorkedUnits()) + "\n";
	}

	while (!WindowShouldClose())
	{
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));

		if (GuiButton(Rectangle{ 24, 24, 120, 30 }, "#191#Show Message")) showMessageBox = true;

		if (showMessageBox)
		{
			int result = GuiMessageBox(Rectangle{ 85, 70, 250, 100 },
				"#191#Message Box", test.c_str(), "Nice;Cool");

			if (result >= 0) showMessageBox = false;
		}

		EndDrawing();
	}

	CloseWindow();
	return 0;
}