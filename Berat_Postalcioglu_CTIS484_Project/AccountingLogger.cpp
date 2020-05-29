#include "AccountingLogger.h"

AccountingLogger::AccountingLogger()
{
}

AccountingLogger::~AccountingLogger()
{
}

void AccountingLogger::update(SellObservable *sell_observable)
{
	std::cout << "\n:::AccountingLogger:::  :::updated:::" << std::endl;
	sell_observable->out();
	std::cout << ":::AccountingLogger:::  :::updated:::" << std::endl;
}