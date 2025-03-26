#pragma once 
#include<iostream>  
#include "Student.h"
#include <vector>
#include <algorithm>

using namespace std; 

class Curse
{
private:
    vector<Student*> students; 
public:
    Curse();
    ~Curse();
    void enroll(Student* student); 
    void unenroll(Student* Student); 
    bool isEnroll(Student* Student); 
    void isFull(); 
    void printCurse(); 

};


