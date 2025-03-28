#include <iostream>

int main() {
    using namespace std;

    int apples;
    cout << "How many apples do you have?" << endl;
    cin >> apples;
    cout
    << "Here are two more." << endl
    << "Now you have " << apples+2 << " apples." << endl; 
    return 0;
}