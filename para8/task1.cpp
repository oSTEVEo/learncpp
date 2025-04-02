#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

void upperrstr(string &buffer) { // лол, я тут случайно $ вместо & использовал
    for (int i = 0; buffer[i] != 0; i++) {
        buffer[i] = toupper(buffer[i]);
    }
    return;
}

int main() {
    string mystring = "aAbBcC1234aaaBBBzzzZZZ &&*#aaa";
    upperrstr(mystring);
    cout << mystring;
}