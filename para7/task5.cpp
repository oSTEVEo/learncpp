#include <iostream>

int square(int input) {
    return input*input;
}

int* sampling(int array[], int count, int (*func)(int)) {
    int* nArr = new int[count];
    for (int i = 0; i < count; i++) {
        nArr[i] = func(array[i]);
    }
    return nArr;
}

int main() {
    using namespace std;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* arr2 = sampling(arr, 10, square);
    cout << arr2[2] << endl;
}