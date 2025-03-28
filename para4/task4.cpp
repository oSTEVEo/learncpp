#include <iostream>
#include <string>

struct Pair {
    std::string month; 
    int amount;
};

int main() {
    using namespace std;
    long sum = 0;
    Pair months[] = {
        {"Январь"},
        {"Февраль"},
        {"Март"},
        {"Апрель"},
        {"Май"},
        {"Июнь"},
        {"Июль"},
        {"Август"},
        {"Сентябрь"},
        {"Октябрь"},
        {"Ноябрь"},
        {"Декабрь"}
    };
    for (size_t i = 0; i < 12; i++) {
        cout << months[i].month << ": ";
        cin >> months[i].amount;
        sum += months[i].amount;
    }
    cout << "Общая сумма: " << sum << endl;
}