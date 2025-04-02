#include <iostream>

#define arrsize(arr) sizeof(arr)/sizeof(arr[0])

template <typename T>
T* maxn(T* arr, int len) {
    T* maxElement = arr;
    for(int i = 1; i < len; i++) {
        if (arr[i] > *maxElement)
            maxElement = arr + i;
    }
    return maxElement;
}

int main() {
    int arr[] = {1, 66, -12390, 231232, 123123, 123};    
    std::cout << *maxn(arr, arrsize(arr)) << std::endl;
    *maxn(arr, arrsize(arr)) = 0;
    std::cout << *maxn(arr, arrsize(arr)) << std::endl;

}
