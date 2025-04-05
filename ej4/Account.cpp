#include "Account.h"

void Account::deposit(double amount){
    this->balance += amount; 
}

Account::Account(string accountHolder, double amount)
    :accountHolder{accountHolder}, balance{amount}{}

    
    