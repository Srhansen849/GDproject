#pragma once
#include "Data.h"
#include "glfw3.h"

class WindowCreated : public Data
{
public:
	GLFWwindow* window;
};