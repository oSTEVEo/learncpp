#include <iostream>
using namespace std;

#define YEAR 2025

int main() {
    string name;
    int birth;

    cout << "Как вас зовут?\n>>> ";
    cin >> name;
    cout << "В каком году вы родились?\n>>> ";
    cin >> birth;

    cout << "Имя: " << name << "\tВозраст: " << YEAR - birth << endl; 
    return 0;
}