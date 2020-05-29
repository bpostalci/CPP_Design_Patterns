#ifndef SELL_OBSERVABLE_H
#define SELL_OBSERVABLE_H

#include "Observer.h"

class SellObservable
{
public:
	SellObservable();
	virtual ~SellObservable();
	virtual void register_observer(Observer *observer) = 0;
	virtual void notify_observers() = 0;
	virtual void out() = 0;
};
#endif