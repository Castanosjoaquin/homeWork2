#pragma once 
#include <iostream> 
#include <vector>

using namespace std; 

class Student
{
private:
    string fullName; 
    int studentNumb; 
    vector<float> notes; // usar map 
public:
    Student(string name, float numb, vector<float> notes = {});
    ~Student();


    string getName(); 
    int getStudentNumb(); 
    vector<float> getNotes(); 
    float getAverage(); 
    
    bool operator < (Student student); 
    string operator << (Student student); 


};


