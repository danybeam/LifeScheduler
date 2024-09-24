#pragma once

namespace LifeScheduler::View
{
	class IWindowElement
	{
	public:
		virtual ~IWindowElement() {};
		virtual void Draw() = 0;
	private:
		// TODO(danybeam): Add callback function member and make mandatory somehow
	};
}