#include "Student.h"


Student::Student(string name, int numb,vector<pair<string,float>> n)
    : fullName{name},  studentNumb {numb}, notes {n}{ }

Student:: ~Student(){
    cout<<"the student die"<<endl; 
}

string Student::getName(){ 
    return this->fullName; 
}

int Student::getStudentNumb(){ 
    return this->studentNumb; 
}

vector<pair<string, float>> Student::getNotes(){ 
    return this->notes; 
}
float Student::getAverage(){ // change
    vector<pair<string, float>> notes = getNotes(); 
    float sum =0; 
    for(pair<string,float> note : notes){  
        sum += note.second;
    }
    return (sum/notes.size()); 
}

void Student::printNotes(){ 
    for ( pair<string,float> & note : notes) {
        cout << note.first << ": " << note.second << endl;
    }
}

bool operator < ( Student& student1,Student& student2)  { 
    return student1.getName() < student2.getName(); 
}

ostream& operator << (ostream& os, Student& student) {  
    os<< student.fullName;
   return os; 
}

void Student::addNote(string course, float note) {
    notes.push_back(make_pair(course, note));
}

void Student::removeNote(string course) {
    for(int i=0; i<notes.size();i++){ 
        if(notes[i].first == course){
            notes.erase(notes.begin()+ i);
            return; 
        }
    }
    cout<<"the student is not in that class"<<endl; 
}