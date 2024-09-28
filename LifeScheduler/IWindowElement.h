#pragma once

namespace LifeScheduler::View
{
	class IWindowElement
	{
	public:
		virtual ~IWindowElement() {};

		// Use update to handle/call callbacks needs to be implemented per subclass since they do different things
		virtual void Update() = 0; 
		// Draw The component
		virtual void Draw() = 0;
	private:
		// TODO(danybeam): Add callback function member and make mandatory somehow
	};
}