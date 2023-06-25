#pragma once
class GLFWwindow;

class Window
{
public:
	Window(int width, int height, const char* title);
	void render();

private:
	GLFWwindow* window;
};