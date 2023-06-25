#include "Window.h"
#include "glfw3.h"


Window::Window(int width, int height, const char* title) : window(glfwCreateWindow(width, height, title,nullptr, nullptr ))
{
	glfwMakeContextCurrent(this->window);
}
