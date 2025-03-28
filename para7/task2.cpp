#include <iostream>
#include <string.h>

int replace(std::string* buffer, char a, char b) { // replacae all a to b
    int count = 0;
    for (size_t i = 0; i < sizeof(*buffer)/sizeof((*buffer)[0]); i++) {
        if ((*buffer)[i] == a) {
            (*buffer)[i] = b;
            count++;
        }
    }
    return count;
}

int main() {
    using namespace std;
    string tmp; char a, b;
    cout << "Введите строку: "; cin >> tmp;
    cout << "Введите заменяемый символ: "; cin >> a;
    cout << "Введите символ для замены: "; cin >> b; 
    cout << replace(&tmp, a, b) << " " << tmp << endl;

    return 0;
}