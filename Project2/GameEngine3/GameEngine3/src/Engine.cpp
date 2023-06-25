#include "Engine.h"
#include "glfw3.h"
#include "interface/message/data/WindowCreated.h"
#include "interface/message/data/WindowUserPointerSet.h"

void Engine::init()
{
	glfwInit();
	input.init();
	auto engine = this;
	addRule(MessageTypes::WINDOW_CREATED, [engine](Message msg)
		{auto data = (WindowCreated*)msg.data;
	glfwSetWindowUserPointer(data->window, engine);
	WindowUserPointerSet data2;
	data2.window = data->window;
	Message msg2{ MessageTypes::WINDOW_USER_POINTER_SET, &data2 };
	engine->notifyObservers(msg2); });
}

void Engine::run()
{
	while (!mainLoopShouldStop)
	{
		for (auto system : runningSystems)
		{
			system.second->run();
		}
	}
}

void Engine::terminate()
{
	glfwTerminate();
}

void Engine::addRunningSystem(int sysType, System* system)
{
	runningSystems.insert({sysType, system});
}

void Engine::initSystems()
{
}
