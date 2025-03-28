#include <iostream>

int main() {
    using namespace std;
    int n;
    cout << "Сколько чисел вы хотите ввести? >>> ";
    cin >> n;

    int *array = new int[n];
    for (size_t i = 0; i < n; i++) {
        cout << "Число по индексу " << i << ": ";
        cin >> array[i];
    }
    for (size_t i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
    return 0;
}