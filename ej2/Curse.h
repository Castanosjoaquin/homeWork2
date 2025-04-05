#pragma once 
#include<iostream>  
#include "Student.h"
#include <vector>
#include <algorithm>
#include <memory>

using namespace std; 

class Curse
{
private:
    vector<shared_ptr<Student>> students;
    string curseName;
public:
    Curse(string name, vector<shared_ptr<Student>> vec= {});
    ~Curse();
    void enroll(shared_ptr<Student>student); 
    void unenroll(int studentNumb); 
    bool isEnroll(int studentNumb); 
    void isFull(); 
    void printCurse(); 
    Curse makeCopy();
    string getCurseName(); 
    void setName(string name); 

};


