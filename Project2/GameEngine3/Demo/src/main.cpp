#include "../../GameEngine3/src/Engine.h"

int main()
{
	Engine engine;
	engine.init();
	Engine* pengine = &engine;
	engine.addRule(MessageTypes::ESCAPE_PRESSED, [pengine](Message) {pengine->mainLoopShouldStop = true; });
	engine.renderer.createWindow(1000, 760, "window");
	engine.addRunningSystem(SystemTypes::INPUT, (System*)&engine.input);
	engine.run();
	engine.terminate();
}