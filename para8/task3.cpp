#include <iostream>

int maxn(int* arr, int len) {
    int maxNum = arr[0];
    for(int i = 1; i < len; i++) {
        if (arr[i] > maxNum)
            maxNum = arr[i];
    }
    return maxNum;
}
double maxn(double* arr, int len) {
    double maxNum = arr[0];
    for(int i = 1; i < len; i++) {
        if (arr[i] > maxNum)
            maxNum = arr[i];
    }
    return maxNum;
}

int main() {
    int arr[] = {1, 2, 3, 66, -12390, 231232, 123123, 123, 90909, 1};
    double arrD[] = {1., 2., 3., 6.6, -12.390, 2312.32, 123.123, 123.9009091, 9090.9, 1};
    
    std::cout << maxn(arr, sizeof(arr)/sizeof(arr[0])) << std::endl;
    std::cout << maxn(arrD, sizeof(arrD)/sizeof(arrD[0])) << std::endl;
}