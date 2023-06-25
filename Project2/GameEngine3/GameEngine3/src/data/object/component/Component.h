#pragma once
#include "TypeCounter.h"

template <typename Derived>
class Component :public TypeCounter
{
	static int typeId() {
		static int typeId = TypeCounter::counter++;
	}
};