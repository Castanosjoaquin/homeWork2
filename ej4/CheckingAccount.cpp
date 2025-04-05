#include "CheckingAccount.h"
CheckingAccount::CheckingAccount(string accountHolder, double balance, shared_ptr<SavingAccount> sa)
    : Account(accountHolder, balance), sa{sa} {}; 

CheckingAccount::~CheckingAccount(){ 
    cout<<"the accout has been close"<<endl;
}

int CheckingAccount::withdraw(int amount){ 
    if(this->balance < amount && sa == nullptr){ 
        cout<<"insuficient founds"<<endl;
        return 0 ;
    }
    else if(this->balance <amount){ 
        double savingAmount = sa->withdraw(amount- (this->balance)); 
        if(savingAmount ==0) return 0; 
        this->balance =0;
        return amount; 
    }
    this->balance -= amount; 
    return amount;     
}

void CheckingAccount::showInfo(){ 
    cout<<"Account holder: "<< this->accountHolder<<endl; 
    cout<<"Balance: "<< this->balance<<endl; 
     cout<<"Account type: Checking Account"<<endl; 
}