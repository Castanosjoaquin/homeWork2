#pragma once 
#include <iostream> 
#include <vector>
#include <utility> 

using namespace std; 

class Student
{
private:
    string fullName; 
    int studentNumb; 
    vector<pair<string,float>> notes; 
public:
    Student(string name, int numb,vector<pair<string,float>>  n = {}); // curse no sea str,sino curse pregunntar a agus
    ~Student();

    string getName(); 
    int getStudentNumb(); 
    vector<pair<string,float>> getNotes(); 
    float getAverage(); 
    void addNote(string course, float grade);
    void removeNote(string course); 
    void printNotes();
    
    friend ostream& operator << (ostream& os,Student& student); 

};
bool operator < (Student& student1,Student& student2) ; 

