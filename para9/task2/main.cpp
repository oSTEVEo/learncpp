#include <iostream>

using namespace std;

void some_func() {
    static int counter_1 = 0;
    int counter_2 = 0;
    counter_1 += 1;
    counter_2 += 1;

    cout << "counter_1 = " << counter_1 << endl;
    cout << "counter_1 = " << counter_2 << endl;
    cout << endl;
}

int main(void) {
    const int N = 5;

    for (int n = 0; n < N; n++)
        some_func();
    return 0;
}