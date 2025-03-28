#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    int arr[] = {1, 2, 3, 5, 8, 13, 25, 34, 75, 109};
    cout << "Массив: ";
    for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }

    int index;
    cout << "\nВведите индекс: ";
    cin >> index;
    cout << sqrt(arr[index]) << endl;
}