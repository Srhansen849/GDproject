#pragma once
#include "../System.h"
class GLFWwindow;

class Renderer :public System
{
public:
	Renderer(ObserverManager* observerManager) : System(observerManager) {

	}
	void init();
	void run();
	void createWindow(int width, int height, const char* title);
	void allocateBuffers(int id);
	void populateBuffers(int id);

private:
	GLFWwindow* window;
};