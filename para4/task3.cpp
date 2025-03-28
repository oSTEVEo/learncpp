#include <iostream>

int main() {
    using namespace std;
    int start_n, stop_n;
    long sum = 0;
    cout << "Введите 2 числа: ";
    cin >> start_n >> stop_n;
    for (size_t i = start_n; i <= stop_n; i++)
        sum += i;
    cout << "Сумма: " << sum << endl;
}