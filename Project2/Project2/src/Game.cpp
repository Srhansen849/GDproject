#include "Game.h"
#include "glfw3.h"
#include "system/Renderer/Window.h"
#include "system/Renderer/Renderer.h"

void Game::init()
{
	glfwInit();
	renderer.init();
}

void Game::run()
{
    while (glfwWindowShouldClose(renderer.window))
    {
        renderer.run();
        input.run();
    }
}

void Game::terminate()
{
    glfwTerminate();
}
