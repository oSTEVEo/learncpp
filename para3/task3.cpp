#include <iostream>
#include <string>

struct Book
{
    std::string author, label;
    int pages_n;
    float price_usd;
};

int main() {
    using namespace std;
    Book nb;
    {
    cout << "Введите название книги: ";
    getline(cin, nb.label);
    cout << "Введите автора книги: ";
    getline(cin, nb.author);
    cout << "Введите количество страниц: ";
    cin >> nb.pages_n;
    cout << "Введите стоимость (в USD): ";
    cin >> nb.price_usd;
    }
    
    cout << "\n\n"
    << nb.author << ", \""
    << nb.label << "\", "
    << nb.pages_n << " стр., $"
    << nb.price_usd << ".\n";
}