c = g++ -std=c++0x -Wall 
objects = Observer.o ObservableUtil.o SellObservable.o AbstractProductFactory.o AccountingProductFactory.o AccountingLogger.o Book.o BooksAccounting.o Electronic.o ElectronicsAccounting.o \
		  Product.o Smartphone.o Driver.o
driver: $(objects)
	$(c) -o driver $(objects)
Observer.o: Observer.h Observer.cpp
	$(c) -c -o Observer.o Observer.cpp
ObservableUtil.o: ObservableUtil.h ObservableUtil.cpp
	$(c) -c -o ObservableUtil.o ObservableUtil.cpp
SellObservable.o: SellObservable.h SellObservable.cpp
	$(c) -c -o SellObservable.o SellObservable.cpp
AbstractProductFactory.o: AbstractProductFactory.h AbstractProductFactory.cpp
	$(c) -c -o AbstractProductFactory.o AbstractProductFactory.cpp
AccountingProductFactory.o: AccountingProductFactory.h AccountingProductFactory.cpp
	$(c) -c -o AccountingProductFactory.o AccountingProductFactory.cpp
AccountingLogger.o: AccountingLogger.h AccountingLogger.cpp
	$(c) -c -o AccountingLogger.o AccountingLogger.cpp
Book.o: Book.h Book.cpp
	$(c) -c -o Book.o Book.cpp
BooksAccounting.o: BooksAccounting.h BooksAccounting.cpp
	$(c) -c -o BooksAccounting.o BooksAccounting.cpp
Electronic.o: Electronic.h Electronic.cpp
	$(c) -c -o Electronic.o Electronic.cpp
ElectronicsAccounting.o: ElectronicsAccounting.h ElectronicsAccounting.cpp
	$(c) -c -o ElectronicsAccounting.o ElectronicsAccounting.cpp
Product.o: Product.h Product.cpp
	$(c) -c -o Product.o Product.cpp
Smartphone.o: Smartphone.h Smartphone.cpp
	$(c) -c -o Smartphone.o Smartphone.cpp
Driver.o: Driver.h Driver.cpp
	$(c) -c -o Driver.o Driver.cpp
	
clean:
	rm $(objects)
