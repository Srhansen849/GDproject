#pragma once
#include "system/Renderer/Renderer.h"
#include "system/Input.h"
#include "Object.h"
#include <vector>

class Game
{
public:
	void init();
	void run();
	void terminate();

private:
	std::vector<Object*> objects;
	Renderer renderer;
	Input input;
	bool gameShouldRun = true;
};