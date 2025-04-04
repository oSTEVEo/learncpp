#include <iostream>
#include <string.h>
#include "bank_account.h"

extern const int Len;

void set_bank_account(bank_account &ba, char *name, double bal) {
    strcpy(ba.fullname, name);
    ba.balance = bal;
    return;
};

int set_bank_account(bank_account &ba) {
    using namespace std;
    cout << "Account name: ";
    cin >> ws;
    cin.getline(ba.fullname, Len);
    if (ba.fullname == "")
        return 0;
    cout << "Account balance: ";
    cin >> ba.balance;
    return 1;
};

void change_balance(bank_account &ba, double new_balance) {
    ba.balance = new_balance;
    return;
};

void show_bank_account(const bank_account &ba) {
    std::cout
    << "Name: " << ba.fullname
    << "\nBalance: " << ba.balance << "\n";
    return;
};