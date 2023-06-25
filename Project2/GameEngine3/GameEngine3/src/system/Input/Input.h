#pragma once
#include "../System.h"
class GLFWwindow;

class Input : public System
{
public:
	Input(ObserverManager* observerManager) : System(observerManager), window(nullptr)
	{

	}
	void init();
	void run();
	void pollEvents();
	GLFWwindow* window;

private:
};