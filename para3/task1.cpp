#include <iostream>
#include <string>

struct post
{
    int index, house_n, apart_n;
    std::string city, street, name;
};


int main() {
    using namespace std;
    post np;
    {
    cout << "Почтовый индекс: ";
    cin >> np.index;
    cout << "Город: ";
    getline(cin >> ws, np.city);
    cout << "Улица: ";
    getline(cin, np.street);
    cout << "Номер дома: ";
    cin >> np.house_n;
    cout << "Номер квартиры: ";
    cin >> np.apart_n;
    cout << "ФИО: ";
    getline(cin >> ws, np.name);
    }

    cout << "\n\n"
    << np.index << ", " << np.city << endl
    << np.street << ", " << np.house_n << endl
    << np.name << endl; 
}