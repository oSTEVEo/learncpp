#include <iostream>
using namespace std;

#define KILOWWATTS_K 0.7457

int main() {
    double power;
    cout << "Введите мощность двигателя в ЛС: ";
    cin >> power;
    cout << "Мощность двигателя в кВт: " << power*KILOWWATTS_K << endl;
    return 0; 
}