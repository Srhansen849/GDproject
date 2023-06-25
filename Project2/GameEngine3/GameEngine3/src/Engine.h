#pragma once
#include "system/System.h"
#include "system/Renderer/Renderer.h"
#include "system/Input/Input.h"
#include <map>
#include "interface/Observer.h"
#include "interface/ObserverManager.h"
#include "interface/message/Message.h"

class Engine : public Observer
{
public:
	Engine() : input(&observerManager), renderer(&observerManager), Observer(&observerManager) {

	}

	void init();
	void run();
	void terminate();
	void addRunningSystem(int sysType, System* system);
	Renderer renderer;
	Input input;
	bool mainLoopShouldStop = false;

private:
	ObserverManager observerManager;
	std::map<int, System*> runningSystems;
	void initSystems();
};