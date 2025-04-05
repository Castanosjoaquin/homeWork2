#include "SavingAccount.h"


SavingAccount::SavingAccount(string accountHolder, double amount, int attempts)
    :Account(accountHolder,amount), attempts{attempts}{}

SavingAccount::~SavingAccount(){ 
    cout<<"Your saving account has been close"<<endl; 
}

int SavingAccount::withdraw(int amount){  
    if(this->balance < amount){
        cout<<"You dont have enough moneny"<<endl; 
        return 0;
    }  
    this->balance -= amount; 
    return amount; 
}


void SavingAccount::showInfo(){ 
    this-> attempts -=1; 
    if(this->attempts ==0){ 
        this->balance -= 20; 
        this->attempts =2; 
    }
    cout<<"Account holder: "<< this->accountHolder<<endl; 
    cout<<"Balance: "<< this->balance<<endl; 
    cout<<"Account type: SavingAccount"<<endl; 
}