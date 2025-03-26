#include "Curse.h"

void Curse::enroll(Student* student){ 
    if(students.size() == 20) { 
        cout<<"The class is full"<<endl; 
        return;
       }
    this->students.push_back(student); 
}

void Curse::unenroll(Student* student){ 
    for(int i=0; i<students.size();i++){  
        if(students[i]->getStudentNumb() == student->getStudentNumb()){ 
            students.erase(students.begin() + i);  // va el begin por el erase no funciona por indice, sino q por iterador
        }
    }
}

bool Curse::isEnroll(Student* student){ 
    for(int i=0; i<students.size();i++){  
        if(students[i]->getStudentNumb() == student->getStudentNumb()){ 
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
    sort(students.begin(), students.end());
    for (Student* student: students){
        cout<< &student <<endl;
    }      
}



