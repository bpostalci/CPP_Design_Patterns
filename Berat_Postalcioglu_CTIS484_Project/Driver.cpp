#include <iostream>

#include "Driver.h"

using namespace std;

void start_shopping_simulation(AbstractProductFactory *factory);
void dealloc_vector_eles(vector<Product*> &vector);
void simulate(Product *product);

int main()
{
	AbstractProductFactory *factory = new AccountingProductFactory();
	start_shopping_simulation(factory);
	return 0;
}

void start_shopping_simulation(AbstractProductFactory *factory)
{
	cout << ":::Shopping Simulation:::" << endl;
	AccountingLogger *logger = new AccountingLogger();
	
	vector<Product*> product_vector;
	product_vector.push_back(factory->create_book(
		"Roger Penrose", 
		"The Emperor's New Mind",
		"Oxford University",
		640, 
		15));
	product_vector.push_back(factory->create_book(
		"Donald E. Knuth",
		"The Art of Computer Programming Volume I",
		"Addison-Wesley Professional",
		672,
		63));
	product_vector.push_back(factory->create_smart_phone("iOS", "Apple", 652));
	product_vector.push_back(factory->create_smart_phone("Android", "Huawei", 869));

	std::for_each(product_vector.begin(), product_vector.end(),
		[&](Product* p) { p->register_observer(logger); }
	);
	std::for_each(product_vector.begin(), product_vector.end(),
		[&](Product* p) { simulate(p); }
	);

	cout << "\n:::Accounting Information:::" << endl;
	cout << "Total income from electronics: " << ElectronicsAccounting::get_income() << endl;
	cout << "Number of selled electronics: " << ElectronicsAccounting::get_number_of_selled_electronics() << endl;
	cout << "Total income from books: " << BooksAccounting::get_income() << endl;
	cout << "Number of selled books: " << BooksAccounting::get_number_of_selled_books() << endl;

	dealloc_vector_eles(product_vector);
}

void simulate(Product *product)
{
	product->sell();
}

void dealloc_vector_eles(vector<Product*> &vector)
{
	std::for_each(vector.begin(), vector.end(),
		[&](Product *p) {
		delete p;
		}
	);
}