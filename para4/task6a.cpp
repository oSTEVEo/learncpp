#include <iostream>
#include <string>

struct CBRarte { int treshold_income; float rate;};

const int unobligated_income = 12'950;
const CBRarte rates[] = {
    {0,         0.10},
    {10'276,    0.12},
    {41'776,    0.22},
    {89'076,    0.24},
    {170'051,   0.32},
    {215'951,   0.35},
    {539'901,   0.37},
};

float getTax(int income) {
    float tax = 0;
    income -= unobligated_income;
    if (income < 0) { return 0; }
    const int rates_n = sizeof(rates)/sizeof(rates[0]);

    for (int i = 0; i < rates_n-1; i++) {
        if (income < rates[i+1].treshold_income) {
            tax += income*rates[i].rate;
            break;
        }
        float delta = rates[i+1].treshold_income - rates[i].treshold_income;
        tax += delta*rates[i].rate;
        income -= delta;
    }
    if (income > 0) {
        tax += income*rates[rates_n].rate;
    }
    return tax;
}

float efficentRate(int income) {
    float tax = getTax(income);
    income -= unobligated_income;
    if (income < 0) { return 0.0; }
    return (tax / income);
}

int main() {
    using namespace std;
    int input;
    while (true) {
        cout << "Доход: ";
        cin >> input;
        if (!(input > 0))
            break;
        cout << "Налог: " << getTax(input) << "$\n";
        cout << "Эффективная ставка: " << efficentRate(input)*100 << "%\n";
    }
}