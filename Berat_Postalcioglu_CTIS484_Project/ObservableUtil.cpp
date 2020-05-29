#include "ObservableUtil.h"

ObservableUtil::ObservableUtil(SellObservable *product) : SellObservable()
{
	this->product = product;
}

ObservableUtil::~ObservableUtil()
{
	delete product;
}

void ObservableUtil::register_observer(Observer *observer)
{
	observers.push_back(observer);
}

void ObservableUtil::notify_observers()
{
	std::for_each(observers.begin(), observers.end(),
		[&] (Observer *o) {
			o->update(product);
		}
	);
}

void ObservableUtil::out()
{
	product->out();
}