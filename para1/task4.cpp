#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265358979

int main() {
    double angle, radians;
    cout << "Введите угол в градусах: ";
    cin >> angle;
    radians = (angle/180) * PI;
    cout
    << "Угол в радианах: " << radians << endl
    << "cos(" << radians << ") = " << cos(radians) << endl
    << "sin(" << radians << ") = " << sin(radians) << endl;
}