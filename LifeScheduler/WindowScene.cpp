#include <LifeScheduler/WindowScene.h>
#include <LifeScheduler/PopupMenuElement.h>

LifeScheduler::View::WindowScene::WindowScene()
{
	Vector2 temp = { 69, 69 };
	std::string name = "banana";
	std::string list = "foo;bar;bax";
	PopupMenuElement* test = new PopupMenuElement(temp, name, list);
	AddElement(test);
}

LifeScheduler::View::WindowScene::~WindowScene()
{
	for (auto componentPtr : m_components)
	{
		delete componentPtr;
	}

	m_components.clear();
}

void LifeScheduler::View::WindowScene::Update()
{
}

void LifeScheduler::View::WindowScene::Draw()
{
	for (auto& windowElement : m_components)
	{
		windowElement->Draw();
	}
}

void LifeScheduler::View::WindowScene::AddElement(IWindowElement* newElement)
{
	m_components.push_back(newElement);
}
