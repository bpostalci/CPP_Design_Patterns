#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <string>
#include "Electronic.h"

class Smartphone : public Electronic
{
public:
	Smartphone(const char* os, const char* brand, double price);
	~Smartphone();
	const char* get_operating_system() const;
	void set_operating_system(const char* os);
	double sell();
	void register_observer(Observer *observer);
	void notify_observers();
	void out();
private:
	char *operating_system;
	ObservableUtil *observable_util;
};
#endif