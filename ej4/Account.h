#pragma once 

#include <iostream> 

using namespace std; 

class Account
{
private: 
    double balance; 
    string accountHolder; 

    

public:
    Account();
    ~Account();
    void deposit(); 
    void withdraw();
    void showInfo();
};


