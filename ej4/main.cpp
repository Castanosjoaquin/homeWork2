#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "Account.h"

int main(){ 
    shared_ptr<SavingAccount> account2 = make_shared<SavingAccount>("bombardina cocodrilo", 0);     
    shared_ptr<CheckingAccount> account1 = make_shared<CheckingAccount>("bombardina cocodrilo", 0,account2); 

    
    account1->deposit(20); 
    account1->showInfo(); 
    account1->withdraw(10); 
    account1->showInfo(); 
    cout<<endl; 
    account2->deposit(10); 
    account2->showInfo(); 
    cout<<endl; 
    account1->withdraw(20);
    account1->showInfo(); 

    cout<<endl; 



}