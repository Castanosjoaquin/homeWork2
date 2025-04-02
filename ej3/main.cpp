#include "main.h"


int main(){
    shared_ptr<Numero> n1 = make_shared<Complejo>(3,4);
    shared_ptr<Numero> n2 = make_shared<Complejo>(1,2);
    shared_ptr<Numero> n3 = make_shared<Complejo>(5,6);
    shared_ptr<Numero> n4 = make_shared<Complejo>(7,8);

    cout << "n1: " << n1->toString() << endl;
    cout << "n2: " << n2->toString() << endl;
    cout << "n3: " << n3->toString() << endl;
    cout << "n4: " << n4->toString() << endl;

    shared_ptr<Numero> r = *(*n1 + *n2) * *(*n3 - *n4);
    cout << "Resultado: " << r->toString() << endl;

    return 0;   

}