#include "Renderer.h"
#include "glfw3.h"
#include "../../interface/message/data/WindowCreated.h"
#include "../../interface/message/data/ObjectCreated.h"

void Renderer::init()
{
	auto renderer = this;
	addRule(MessageTypes::OBJECT_CREATED, [renderer](Message msg)
		{auto data = (ObjectCreated*)msg.data;
	renderer->allocateBuffers(data->id);
	renderer->populateBuffers(data->id); });
}

void Renderer::run()
{
}

void Renderer::createWindow(int width, int height, const char* title)
{
	window = glfwCreateWindow(width, height, title, nullptr, nullptr);
	glfwMakeContextCurrent(window);
	auto data = WindowCreated{ };
	data.window = window;
	Message msg{ MessageTypes::WINDOW_CREATED,   &data};
	notifyObservers(msg);
}

void Renderer::allocateBuffers(int id)
{
}

void Renderer::populateBuffers(int id)
{
}
