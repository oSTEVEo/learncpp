#include <iostream>
#define BACK_SYMBOL '#'
#define FRONT_SYMBOL '*'

int main() {
    using namespace std;
    int len;
    cout << "Введите количество строк: ";
    cin >> len;
    for (size_t i = 1; i <= len; i++) {
        for (size_t j = 0; j < len-i; j++)
            cout << BACK_SYMBOL;
        for (size_t j = 0; j < i; j++)
            cout << FRONT_SYMBOL;
        cout << endl;
    }
    cout << endl;
}