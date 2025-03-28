#include <iostream>
#define MAX 1000
int main() {
    int sum = 0;
    for (size_t i = 0; i < MAX; i++) {
        if ((i%3==0) || (i%5==0)) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}