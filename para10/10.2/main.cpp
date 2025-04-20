#include <iostream>
#include "auto.h"
using std::cout;

#define ACC  "\e[33m" <<
#define ACC2  "\e[2m" <<
#define NORM << "\e[0m"

int main() {
    Auto bobik("UAZ-469B", 1972, 3658.04, 30, 169037);
    cout << ACC "Original:\n" NORM;
    bobik.show();

    cout << ACC "Trying mileage hack\n" NORM;
    bobik.setMileage(50000);
    bobik.show();

    cout << ACC "Another mileage test\n" NORM;
    double newM = 200000;
    double oldM = bobik.setMileage(newM);
    cout << ACC2 "[TEST] Mileage added: " << newM - oldM NORM<< "\n";
    bobik.show();
    
    cout << ACC "Changing the price & Fuel\n" NORM;
    bobik.setFuel(15);
    bobik.setPrice(4237);
    bobik.show();    
}