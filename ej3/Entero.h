#pragma once 
#include "Numero.h"

class Entero : public Numero {
private:
    int valor;
public:
    Entero(int v);  
    ~Entero();
    shared_ptr<Numero> operator+(Numero& n) override;
    shared_ptr<Numero> operator-(Numero& n) override;
    shared_ptr<Numero> operator*(Numero& n) override;
    string toString() override;
};

