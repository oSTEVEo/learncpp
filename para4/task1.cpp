#include <iostream>
#include <string>

int main() {
    using namespace std;
    string input = "";
    int i = 0;
    do { cin >> input; i++; }
    while (input != "done");
    
    cout << i-1 << endl;
}