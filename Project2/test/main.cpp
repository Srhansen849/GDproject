#include <iostream>
#include <cmath>

class TypeCounter
{
public:
	static int counter;
};

int TypeCounter::counter = 0;

class Component
{
public:
	virtual int typeId(){
		static int type = TypeCounter::counter++;
		return type;
	}

};

template <typename Derived> 
class withCounter : public Component
{
public:
	static int typeId() {
		static int type = pow(2, TypeCounter::counter++); return type;
	}
};

class A : public withCounter<A>
{

};

class B : public withCounter<B>
{

};



int main()
{
	A a, c;
	B b;

	std::cout << a.typeId() << "\n" << b.typeId();
}