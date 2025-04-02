#include "Complejo.h"

Complejo::Complejo(float r, float i) :  real{r},  imaginario{i} {}
Complejo::~Complejo() {}

shared_ptr<Numero> Complejo::operator+(Numero& n) {
    Complejo rn = dynamic_cast<Complejo&>(n);
    shared_ptr<Numero> r = make_shared<Complejo>(real + rn.real,imaginario + rn.imaginario); 
    return r;
}

shared_ptr<Numero> Complejo::operator-(Numero& n) {
    Complejo rn = dynamic_cast<Complejo&>(n);
    shared_ptr<Numero> r = make_shared<Complejo>(real - rn.real,imaginario - rn.imaginario);
    return r;
}

shared_ptr<Numero> Complejo::operator*(Numero& n) {
    Complejo rn =dynamic_cast<Complejo&>(n);
    shared_ptr<Numero> r = make_shared<Complejo>(real * rn.real - imaginario * rn.imaginario, real * rn.imaginario + imaginario * rn.real);
    return r;
}

string Complejo::toString() {
    stringstream ss;
    ss << real << " + (" << imaginario << ")i";
    return ss.str();
}

