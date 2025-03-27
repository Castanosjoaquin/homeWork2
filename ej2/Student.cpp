#include "Student.h"


Student::Student(string name, float numb, vector<float> notes = {})
    : fullName{name},  studentNumb {numb}, notes {notes}{ }

Student:: ~Student(){}

string Student::getName(){ 
    return this->fullName; 
}

int Student::getStudentNumb(){ 
    return this->studentNumb; 
}

vector<float> Student::getNotes(){ 
    return this->notes; 
}
float Student::getAverage(){ 
    vector<float> notes = getNotes(); 
    float sum =0; 
    for(float note : notes){  
        sum +=  note; 
    }
    return (sum/notes.size()); 
}

bool Student::operator < (Student student){ 
    return this->fullName < student.fullName; 
}

string Student::operator << (Student student){  
   return student.getName(); 
}
