#pragma once
#include <vector>

class GLFWwindow;
class Object;


class Renderer
{
public:
	void init();
	void run(std::vector<Object*> objects);
	GLFWwindow* window;
};