#ifndef ACCOUNTING_LOGGER_H
#define ACCOUNTING_LOGGER_H

#include <iostream>
#include "Observer.h"
#include "SellObservable.h"

class AccountingLogger : public Observer
{
public:
	AccountingLogger();
	~AccountingLogger();
	void update(SellObservable *sell_observable);
};
#endif