#pragma once 
#include <memory>
#include <iostream> 

using namespace std; 

class Account
{
protected:
    double balance; 
    string accountHolder; 

public:
    Account(string accountHolder, double balance);
    void deposit(double amount);
    virtual int withdraw(int amount )=0;
    virtual void showInfo()=0;
};


