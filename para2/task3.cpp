#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    cout << setw(5) << "dec" << setw(5) << "char" << endl;
    for (int i = 0; i < 256; i++) {
        cout << setw(5) << i << setw(5) << (char)i << endl;
    }
}   