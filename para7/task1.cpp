#include <iostream>

float ctof(float celsius) {
    return (9./5.)*celsius + 32; 
}

int main() {
    using namespace std;
    float tmp;
    cout << "Введите температуру в цельсиях:";
    cin >> tmp;
    cout << "Температура в фаренгейтах: " << ctof(tmp);
    return 0;
}