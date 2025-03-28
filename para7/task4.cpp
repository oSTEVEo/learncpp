#include <iostream>
#include <cmath>

#define STEP 0.1

double sin_bhaskara_reduced(double x) {
    double ksi = x/M_PI;
    return (16*ksi*(1-ksi)) / (5-4*ksi*(1-ksi));
}

double sin_bhaskara(double x) {
    while (x > 2*M_PI)
        x-=2*M_PI;
    while (x < 0)
        x+=2*M_PI;
    
    return sin_bhaskara_reduced(x);
}

int main() {
    double maxerr = 0, err;
    for (double x = 0; x < M_PI; x+=STEP) {
        err = fabs(sin_bhaskara(x) - sin(x)); 
        if(err > maxerr) 
            maxerr = err;
    }
    std::cout << maxerr << "\n";
    
}