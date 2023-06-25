#pragma once
#include "../interface/Observer.h"

enum SystemTypes{INPUT, 
			     RENDERER,
				 };

class System : public Observer
{
public:
	System(ObserverManager* observerManager);
	virtual void init() = 0;
	virtual void run() = 0;
};