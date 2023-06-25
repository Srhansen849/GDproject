#include "ObserverManager.h"
#include "message/Message.h"
#include "Observer.h"

void ObserverManager::notifyObservers(Message msg)
{
	for (auto observer : observers.at(msg.type))
	{
		observer->processMessage(msg);
	}
}

void ObserverManager::subscribe(int msgType, Observer* observer)
{
	observers[msgType].push_back(observer);
}
