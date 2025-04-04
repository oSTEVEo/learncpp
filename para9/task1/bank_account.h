const int Len = 40;
struct bank_account
{
    char fullname[Len];
    double balance;
};

void set_bank_account(bank_account &ba, char *name, double bal);
int set_bank_account(bank_account &ba);
void change_balance(bank_account &ba, double new_balance);
void show_bank_account(const bank_account &ba);