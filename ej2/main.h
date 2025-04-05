#pragma once
#include <iostream>
#include "Student.h"
#include "Curse.h"

void printMenu();

void enroll(vector<shared_ptr<Curse>> &curses,vector<shared_ptr<Student>>& students);

void unenroll(vector<shared_ptr<Curse>> &curses); 

void isenroll(vector<shared_ptr<Curse>> &curses); 

void isFull(vector<shared_ptr<Curse>> &curses); 

void printCurse(vector<shared_ptr<Curse>> &curses); 

void makeCopy(vector<shared_ptr<Curse>> &curses); 

void createCurse( vector<shared_ptr<Curse>>& curses) ; 

void studentMenu(vector<shared_ptr<Student>> students); 

shared_ptr<Curse> searchCurse(string curseName,vector<shared_ptr<Curse>> curses); 

void averge(Student& student); 

void printNotes(Student& student); 

void addNotes(Student& student); 

void removeNotes(Student& student);

shared_ptr<Student> searchStudent(int studentNumn, vector<shared_ptr<Student>> students);