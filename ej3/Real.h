#pragma once 
#include "Numero.h"

class Real : public Numero {
private:
    float valor;
public:
    Real(float v);
    ~Real();
    shared_ptr<Numero> operator +(Numero& n) override;
    shared_ptr<Numero> operator -(Numero& n) override;
    shared_ptr<Numero> operator *(Numero& n) override;
    string toString() override;
};

