#pragma once
#include <map>
#include <vector> 

class Message;
class Observer;

class ObserverManager
{
public:
	void notifyObservers(Message msg);
	void subscribe(int msgType, Observer*);

private:
	std::map<int, std::vector<Observer*>> observers;
};