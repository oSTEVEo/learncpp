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
    int n;
    cout << "Введите количество книг: ";
    cin >> n;
    Book* books = new Book[n];
    Book* nb; 
    for (int i = 0; i < n; i++) {
        nb = books + i;
        cout << "Введите название книги: ";
        getline(cin >> ws, nb->label);
        cout << "Введите автора книги: ";
        getline(cin, nb->author);
        cout << "Введите количество страниц: ";
        cin >> nb->pages_n;
        cout << "Введите стоимость (в USD): ";
        cin >> nb->price_usd;
    }
    
    for (int i = 0; i < n; i++) {
        nb = books + i;
        cout << "\n"
        << nb->author << ", \""
        << nb->label << "\", "
        << nb->pages_n << " стр., $"
        << nb->price_usd << ".";
    }
    delete[] books;
    cout << endl;
}