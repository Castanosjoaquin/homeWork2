#pragma once 
#include "Numero.h"
#include <sstream> 

class Complejo : public Numero {
private:
    float real;
    float imaginario;
public:
    Complejo(float r, float i);
    ~Complejo();
    shared_ptr<Numero> operator+(Numero& n) override;
    shared_ptr<Numero> operator-(Numero& n) override;
    shared_ptr<Numero> operator*(Numero& n) override;
    string toString() override;
};

