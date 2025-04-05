#pragma once 
#include "Account.h"
#include "SavingAccount.h" 

class CheckingAccount: public Account{
private:
    shared_ptr<SavingAccount> sa; 
public:
    CheckingAccount(string accountHolder, double balance, shared_ptr<SavingAccount> sa);
    ~CheckingAccount();

    int withdraw(int amount) override;
    void showInfo() override;
    
    friend class SavingAccount;
};