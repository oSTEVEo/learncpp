#include <iostream>

double sampling(int** array, int count, double (*func)(double)) {
    for (int i = 0; i < count; i++) {
        std::cout << func((*array)[i]);
    }
}

int main() {
    using namespace std;


}