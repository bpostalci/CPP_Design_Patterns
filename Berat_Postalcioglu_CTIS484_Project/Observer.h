#ifndef OBSERVABLE_H
#define OBSERVABLE_H

class SellObservable;

class Observer
{
public:
	Observer();
	virtual ~Observer();
	virtual void update(SellObservable *sell_observable) = 0;
};
#endif