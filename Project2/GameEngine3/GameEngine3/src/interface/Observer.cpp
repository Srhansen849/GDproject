#include "Observer.h"
#include "ObserverManager.h"
#include "message/Message.h"

void Observer::processMessage(Message msg)
{
	for (auto& func : messageProcs.at(msg.type))
	{
		func(msg);
	}
}

void Observer::notifyObservers(Message msg)
{
	observerManager->notifyObservers(msg);
}

void Observer::addRule(int msgType, std::function<void(Message)> func)
{
	messageProcs[msgType].push_back(func);
	observerManager->subscribe(msgType, this);
}