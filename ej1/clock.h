#pragma once

#include <iostream> 
#include <iomanip> 

using namespace std; 

class Clock{

private: 
    int HH; 
    int MM; 
    int SS;
    string meridiem_indic; 
    bool check_parametrs(int h, int m, int s, string i);
public:
  
    Clock(int h=0, int m=0, int s=0, string i="am");
    ~Clock();        

    void change_format();
    void view_HH();
    void view_MM();  
    void view_SS(); 
    void change_HH();
    void change_MM();  
    void change_SS(); 
    void view_time(); 

};



