#include <iostream>

enum color {
    red = 680,
    orange = 610,
    yellow = 580,
    green = 530,
    blue = 470,
    indigo = 440,
    violet = 400
};

int wavelen(enum color colorName) {
    return static_cast<int>(colorName);
}

int main() {
    using namespace std;
    cout << wavelen(violet) << endl;
}