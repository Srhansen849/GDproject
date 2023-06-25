#pragma once
#include <map>
#include <functional>
#include <vector> 

class Message;
class ObserverManager;

class Observer
{
public:
	Observer(ObserverManager* observerManager) : observerManager (observerManager) {

	}
	void processMessage(Message msg);
	void notifyObservers(Message msg);
	void addRule(int msgType, std::function<void(Message)> func);

protected:
	ObserverManager* observerManager;
	std::map<int, std::vector<std::function<void(Message)>>> messageProcs;
};