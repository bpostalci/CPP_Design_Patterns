#ifndef OBSERVABLE_UTIL_H
#define OBSERVABLE_UTIL_H

#include <vector>
#include <algorithm>
#include "SellObservable.h"
#include "Observer.h"

class Product;

// a util class for products to delegate their SellObservable virtual functions
class ObservableUtil : public SellObservable
{
public:
	ObservableUtil(SellObservable *product);
	~ObservableUtil();
	void register_observer(Observer *observer);
	void notify_observers();
	void out();
private:
	std::vector<Observer*> observers;
	SellObservable *product;
};
#endif