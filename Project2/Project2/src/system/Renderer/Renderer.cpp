#include "Renderer.h"
#include "Window.h"
#include "glfw3.h"

void Renderer::init()
{
	Window window(1000, 760, "window");

}

void Renderer::run(std::vector<Object*> objects)
{
	glClear(GL_COLOR_BUFFER_BIT);
	for (auto object : objects)
	{
		object.draw();
	}
	glfwSwapBuffers(window);
}
