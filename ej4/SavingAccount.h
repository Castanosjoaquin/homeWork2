#pragma once
#include "Account.h"

class SavingAccount : public Account{

private: 
    int attempts; 
public:
    SavingAccount(string accountHolder, double amount, int attempts=2);
    ~SavingAccount(); 
    int withdraw(int amount) override; 
    void showInfo() override;
}; 