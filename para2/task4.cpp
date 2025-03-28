#include <iostream>
int main() {
    double inputs[] = {-12.20, 12.20, -40.76, 40.76};

    for (int i = 0; i < sizeof(inputs)/sizeof(inputs[0]); i++) {
        std::cout << "input double: " << inputs[i] << "\toutput int " << (int)inputs[i] << std::endl;
    }
    
}