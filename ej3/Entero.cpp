#include "Entero.h"

Entero::Entero(int v) : valor(v) {}
Entero::~Entero() {}

shared_ptr<Numero> Entero::operator+(Numero& n) {
    Entero rn = dynamic_cast<Entero&>(n);
    shared_ptr<Numero> r = make_shared<Entero>(valor + rn.valor);
    return r;
}

shared_ptr<Numero> Entero::operator-(Numero& n) {
    Entero rn = dynamic_cast<Entero&>(n);
    shared_ptr<Numero> r = make_shared<Entero>(valor - rn.valor);
    return r;
}

shared_ptr<Numero> Entero::operator*(Numero& n) {
    Entero rn =dynamic_cast<Entero&>(n);
    shared_ptr<Numero> r = make_shared<Entero>(valor * rn.valor);
    return r;
}

string Entero::toString() {
    return to_string(valor); //preguntar
}

