#include "Real.h"

Real::Real(float v) : valor(v) {}
Real::~Real() {}

shared_ptr<Numero> Real::operator+(Numero& n) {
    Real rn = dynamic_cast<Real&>(n);
    shared_ptr<Numero> r = make_shared<Real>(valor + rn.valor);
    return r;
}

shared_ptr<Numero> Real::operator-(Numero& n) {
    Real rn = dynamic_cast<Real&>(n);
    shared_ptr<Numero> r = make_shared<Real>(valor - rn.valor);
    return r;
}

shared_ptr<Numero> Real::operator*(Numero& n) {
    Real rn =dynamic_cast<Real&>(n);
    shared_ptr<Numero> r = make_shared<Real>(valor * rn.valor);
    return r;
}

string Real::toString() {
    return to_string(valor); //preguntar
}

