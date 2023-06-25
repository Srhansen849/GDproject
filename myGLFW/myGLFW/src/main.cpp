#include "GLFW/glfw3.h"

int main()
{
	GLFWwindow* window;
	
	glfwInit();
	window = glfwCreateWindow(1000, 760, "window", nullptr, nullptr);
	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwTerminate();
}