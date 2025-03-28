#include <iostream>
#include <string>
#include <fstream>

int main() {
    using namespace std;
    fstream file;
    string filename;
    cout << "Введите название файла: ";
    getline(cin, filename);
    file.open(filename);
    if (!file.is_open()) {
        cout << "Невозможно открыть файл\n";
        return EXIT_FAILURE;
    }

    char letter;
    cout << "Введите букву, которую надо посчитать: ";
    cin >> letter;

    long counter = 0;
    char rolling;
    while (file.good()) {
        file.get(rolling);
        if (rolling == letter)
            counter++;
    }
    cout << "Найдено вхождений: " << counter << endl;
    return EXIT_SUCCESS;
}