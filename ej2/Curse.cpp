#include "Curse.h"


Curse::Curse(string name, vector<shared_ptr<Student>> vec )
    :curseName{name}, students{vec}{}



void Curse::enroll(shared_ptr<Student> student){ 
    if(students.size() == 20) { 
        cout<<"The class is full"<<endl; 
        return;}
    this->students.push_back(student); 
    cout << "Student enrolled successfully!" << endl;
}

Curse::~Curse(){ 
    students.clear(); 
    cout<<"the curse blew up"<<endl;
}   

void Curse::unenroll(int student){ 
    for(int i=0; i<students.size();i++){  
        if(students[i]->getStudentNumb() == student){ 
            students.erase(students.begin() + i);  // va el begin por el erase no funciona por indice, sino q por iterador
            cout << "Student unenrolled successfully!" << endl;
            return;
        }
    }
    cout<<student<<" was not is this course"<<endl; 
}

bool Curse::isEnroll(int studentNumb){ 
    for(int i=0; i<students.size();i++){  
        if(students[i]->getStudentNumb() == studentNumb){ 
           return true; 
        }
    }
    return false;
}

void Curse::isFull(){ 
    if(students.size() == 20){
        cout<< "The class is full"<<endl ;
    }
    else  cout<< "The class is not full"<<endl ; 
    return;
}   

void Curse::printCurse(){ 
      sort(students.begin(), students.end(), [](shared_ptr<Student>& a, shared_ptr<Student>& b) {
        return a->getName() < b->getName();
    });
    for (shared_ptr<Student> student: students){
        cout<< *student <<endl;
    }      
}

Curse Curse::makeCopy(){ 
    return *this;// this es un puntero a la clase, por lo que lo desreferenciamos
}	

string Curse::getCurseName(){
    return this->curseName; 
}

void Curse::setName(string name){ 
    this->curseName = name;  
}   