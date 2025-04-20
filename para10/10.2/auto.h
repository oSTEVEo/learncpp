#include <string> 

class Auto {
private:
    std::string brand;
    unsigned int year;
    double price;
    unsigned int mileage; // пробег
    double fuel;
public:
    Auto(std::string brand, unsigned int year, double price, double fuel, unsigned int mileage);
    unsigned int setMileage(unsigned int mileage);
    double setFuel(double fuel);
    double setPrice(double price);
    void show() const;
};


