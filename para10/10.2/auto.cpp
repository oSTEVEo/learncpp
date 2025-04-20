#include <string.h> 
#include <iostream>
#include "auto.h"

using std::cout;

Auto::Auto(std::string brand,
           unsigned int year,
           double price,
           double fuel=20.0,
           unsigned int mileage=0) {
    this->brand = brand;
    this->year = year;
    this->price = price;
    this->mileage = mileage;
    this->fuel = fuel;
}

unsigned int Auto::setMileage(unsigned int newMileage) {
    unsigned int old = this->mileage;
    if (old > newMileage)
        cout << "The new mileage cannot be less than the old one.\nAborted.";
    else
        this->mileage = newMileage;
    return old;
};

double Auto::setFuel(double newFuel) {
    unsigned int old = this->fuel;
    if (newFuel < 0)
        cout << "The fuel cannot be less than zero.\nAborted.";
    else
        this->fuel = newFuel;
    return old;
};

double Auto::setPrice(double newPrice) {
    unsigned int old = this->price;
    if (newPrice < 0)
        cout << "The price cannot be less than zero.\nAborted.";
    else
        this->price = newPrice;
    return old;
};

void Auto::show() const {
    using std::cout; 
  using std::ios_base; 
  
  // Изменение исходного формата вывода, сохранение предыдущих форматов
  ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield); 
  std::streamsize prec = cout.precision(2); 
  
  cout
  << "Brand: " << this->brand << " Year: " << this->year << "\n"
  << "Mileage: " << this->mileage << "km Price: " << this->price << "$\n"
  << "Fuel: " << this->fuel << "gal\n"
  << "\n";
  
  // Восстановление исходного формата 
  cout.setf(orig, ios_base::floatfield); 
  cout.precision(prec); 
};
