#pragma once 

#include <iostream>
#include <memory>

using namespace std;

class Numero{
private:

public:
    virtual shared_ptr<Numero> operator+(Numero& n)=0;
    virtual shared_ptr<Numero> operator-(Numero& n)=0;
    virtual shared_ptr<Numero> operator*(Numero& n) =0;
    virtual ~Numero() = default;    
    virtual string toString() = 0;
};

