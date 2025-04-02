#include <iostream>
#include <string.h>

using namespace std;

struct CandyBar {
    char* name;
    double weight;
    int kcal;
}; // Забыл ;

void barset(CandyBar &bar, char* name = (char*)"Snickers", double weight = 50.5, int kcal = 259) {
    strcpy(bar.name, name); // strcpy(to, from);
    bar.weight = weight;
    bar.kcal = kcal;
    return;
}

void barshow(CandyBar &bar) {
    cout
    << "Название:     " << bar.name   << "\n"
    << "Калорийность: " << bar.kcal   << " ккал\n"
    << "Вес:          " << bar.weight << "\n";
    return;
}

int main() {
    CandyBar mybar;
    char name[100];
    cin >> name;
    barset(mybar, name);
    barshow(mybar);
}