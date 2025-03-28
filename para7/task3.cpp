#include <iostream>

bool is_prime(int num, const int* primenumbers, int count__) {
    for (size_t i = 0; i < count__; i++) {
        if ((primenumbers[i]*primenumbers[i] <= num) && (num % primenumbers[i] == 0))
            return false;
    }
    return true;
}

int main() {
    using namespace std;
    int* primenumbers = new int[100000]; primenumbers[0] = 2;
    int count = 1;
    
    //cout << "Введите число: ";
    int num; num = 100000;
    for (size_t i = 3; i < num; i++) {
        if (is_prime(i, primenumbers, count)) {
            primenumbers[count] = i;
            count++;
        }
    }
    
    /*for (int i = 0; i < count; i++) {
        cout << primenumbers[i] << " ";
    }*/
    cout << endl << count << endl;
    

    using namespace std;
}