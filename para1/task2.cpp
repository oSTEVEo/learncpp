#include <iostream>
using namespace std;


int main() {
    int minutes = -1, hours = -1;
    while (hours < 0 || hours > 23) {
        cout << "Enter the number of hours: ";
        cin >> hours;
    }
    while (minutes < 0 || minutes > 60) {
        cout << "Enter the number of minutes: ";
        cin >> minutes;
    }
    cout << "Time: " << hours << ":" << minutes << endl; 
    return 0;
}