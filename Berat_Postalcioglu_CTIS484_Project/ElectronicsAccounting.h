#ifndef ELECTRONICS_ACCOUNTING_H
#define ELECTRONICS_ACCOUNTING_H

#include "Product.h"
#include "Electronic.h"

class ElectronicsAccounting : public Product
{
public:
	ElectronicsAccounting(Electronic *electronic);
	~ElectronicsAccounting();
	static int get_number_of_selled_electronics();
	static double get_income();
	void register_observer(Observer *observer);
	void notify_observers();
	double sell();
	void out();
private:
	Electronic *electronic;
	static int number_of_selled_electronics;
	static double income;
	ObservableUtil *observable_util;
};
#endif