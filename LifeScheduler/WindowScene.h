#pragma once

#include <LifeScheduler/IWindowElement.h>
#include <vector>

namespace LifeScheduler::View
{
	class WindowScene : public LifeScheduler::View::IWindowElement
	{
	public:
		// Constructors & destructor
		WindowScene();
		virtual ~WindowScene();

		// Interface implementation methods
		virtual void Draw() override;

		// Manipulate elements in the scene
		void AddElement(IWindowElement* newElement);

	private:
		std::vector<IWindowElement*> m_components;
	};
}