#include <iostream>
#define MIN_IN_HOURS 60
#define HOURS_IN_DAY 24
int main() {
    using namespace std;
    uint mins, hours, days;

    cout << "Минуты, Часы, Дни: ";
    cin >> mins >> hours >> days;
    double delta_date = days + hours/float(HOURS_IN_DAY) + mins/float(HOURS_IN_DAY*MIN_IN_HOURS);
    cout << "Result: " << delta_date << endl;

    cout << "Минуты: ";
    cin >> mins;
    days = mins/(HOURS_IN_DAY*MIN_IN_HOURS);
    hours = (mins%(HOURS_IN_DAY*MIN_IN_HOURS)) / MIN_IN_HOURS;
    mins = mins % (MIN_IN_HOURS);
    cout
    << "Дни: " << days
    << " Часы: " << hours
    << " Минуты: " << mins << endl;

    
}