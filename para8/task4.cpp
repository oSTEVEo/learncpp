#include <iostream>

template <typename T>
T maxn(T* arr, int len) {
    T maxElement = arr[0];
    for(int i = 1; i < len; i++) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }
    return maxElement;
}

int main() {
    int arr[] = {1, 66, -12390, 231232, 123123, 123};
    double arrD[] = {-12.390, 2312.32, 123.123, 123.9009091};
    
    std::cout << maxn(arr, sizeof(arr)/sizeof(arr[0])) << std::endl;
    std::cout << maxn(arrD, sizeof(arrD)/sizeof(arrD[0])) << std::endl;

    /*
    #include <type_traits>
    if(std::is_same<T, int>::value) { ... }

    #include<stdlib.h>
    if (typeid(t) == typeid(int)) { ... }
    */

}
