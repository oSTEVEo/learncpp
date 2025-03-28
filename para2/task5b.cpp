#include <iostream>
#define SECS_IN_MINUTE 60
#define MINS_IN_DEGREE 60
int main() {
    using namespace std;
    uint secs, minutes, degrees;

    cout << "Секунд, Минут, Градусов: ";
    cin >> secs >> minutes >> degrees;
    double angle = degrees + minutes/float(MINS_IN_DEGREE) + secs/float(MINS_IN_DEGREE*SECS_IN_MINUTE);
    cout << "Result: " << angle << endl;

    cout << "Секунды: ";
    cin >> secs;
    degrees = secs/(MINS_IN_DEGREE*SECS_IN_MINUTE);
    minutes = (secs%(MINS_IN_DEGREE*SECS_IN_MINUTE)) / SECS_IN_MINUTE;
    secs = secs % (SECS_IN_MINUTE);
    cout
    << "Градусов: " << degrees
    << " Минут: " << minutes
    << " Секунд: " << secs << endl;

    
}