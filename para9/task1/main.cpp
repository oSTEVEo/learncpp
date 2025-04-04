#include <iostream>
#include "bank_account.h"

int main() {
    bank_account user;
    set_bank_account(user, (char*)"Default User", 999);
    show_bank_account(user);
    set_bank_account(user);
    show_bank_account(user);
    std::cout << "balance++\n";
    change_balance(user, 1337);
    show_bank_account(user);
}