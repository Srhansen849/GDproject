#include "Input.h"
#include "glfw3.h"
#include "../../interface/message/data/WindowCreated.h"
#include "../../Engine.h"

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	auto engine = (Engine*)glfwGetWindowUserPointer(window);
	switch (action)
	{
	case GLFW_PRESS:
		switch (key)
		{
		case GLFW_KEY_ESCAPE:
			Message msg{MessageTypes::ESCAPE_PRESSED, nullptr};
			engine->notifyObservers(msg);
		}
	}
}

void Input::init()
{
	auto input = this;
	addRule(MessageTypes::WINDOW_USER_POINTER_SET, [input](Message msg)
		{auto data = (WindowCreated*)msg.data;
	input->window = data->window;
	glfwSetKeyCallback(input->window, key_callback); });
}

void Input::run()
{
	glfwPollEvents();
}

void Input::pollEvents()
{
}
