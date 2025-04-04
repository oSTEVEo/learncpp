#include <iostream>
#include "bank_account.h"

int main() {
    bank_account usr;
    set_bank_account(usr, (char*)"Default User", 999);
    show_bank_account(usr);
    set_bank_account(usr);
    show_bank_account(usr);
    std::cout << "balance++\n";
    change_balance(usr, 1337);
    show_bank_account(usr);
}