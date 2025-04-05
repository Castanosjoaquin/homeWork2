#include "main.h"


int main(){
    // Operaciones con números complejos
    shared_ptr<Numero> c1 = make_shared<Complejo>(3,4);
    shared_ptr<Numero> c2 = make_shared<Complejo>(1,2);
    shared_ptr<Numero> c3 = make_shared<Complejo>(5,6);
    shared_ptr<Numero> c4 = make_shared<Complejo>(7,8);

    shared_ptr<Numero> suma = *c1 + *c2;
    shared_ptr<Numero> resta = *c3 - *c4;
    shared_ptr<Numero> multiplicacion = *suma * *resta;
    cout<<"//////////////////////"<<endl; 
    cout << "Suma (Complejos): " << suma->toString() << endl;
    cout << "Resta (Complejos): " << resta->toString() << endl;
    cout << "Multiplicación (Complejos): " << multiplicacion->toString() << endl;
    cout<<"//////////////////////"<<endl; 
    // Operaciones con números reales
    shared_ptr<Numero> r1 = make_shared<Real>(3.5);
    shared_ptr<Numero> r2 = make_shared<Real>(1.2);
    shared_ptr<Numero> r3 = make_shared<Real>(5.8);
    shared_ptr<Numero> r4 = make_shared<Real>(7.3);

    shared_ptr<Numero> sumaReal = *r1 + *r2;
    shared_ptr<Numero> restaReal = *r3 - *r4;
    shared_ptr<Numero> multiplicacionReal = *sumaReal * *restaReal;

    cout << "Suma (Reales): " << sumaReal->toString() << endl;
    cout << "Resta (Reales): " << restaReal->toString() << endl;
    cout << "Multiplicación (Reales): " << multiplicacionReal->toString() << endl;
    cout<<"//////////////////////"<<endl; 
    // Operaciones con números enteros
    shared_ptr<Numero> e1 = make_shared<Entero>(3);
    shared_ptr<Numero> e2 = make_shared<Entero>(1);
    shared_ptr<Numero> e3 = make_shared<Entero>(5);
    shared_ptr<Numero> e4 = make_shared<Entero>(7);

    shared_ptr<Numero> sumaEntero = *e1 + *e2;
    shared_ptr<Numero> restaEntero = *e3 - *e4;
    shared_ptr<Numero> multiplicacionEntero = *sumaEntero * *restaEntero;

    cout << "Suma (Enteros): " << sumaEntero->toString() << endl;
    cout << "Resta (Enteros): " << restaEntero->toString() << endl;
    cout << "Multiplicación (Enteros): " << multiplicacionEntero->toString() << endl;
    cout<<"//////////////////////"<<endl; 
    return 0;   

}