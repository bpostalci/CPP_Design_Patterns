#ifndef PRODUCT_H
#define PRODUCT_H

#include "SellObservable.h"
#include "ObservableUtil.h"
#include <iostream>

class Product : public SellObservable
{
public:
	Product(double price);
	virtual ~Product();
	virtual long get_id() const;
	virtual void set_id(long id);
	virtual double get_price() const;
	virtual void set_price(double price);
	virtual double sell() = 0;
	virtual void out();
private:
	double price;
	long id;
	static long id_seq;
};
#endif