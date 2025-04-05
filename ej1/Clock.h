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
    void check_parametrs(int h, int m, int s, string i);

    bool check_HH(int h); 
    bool check_MM(int h); 
    bool check_meridem(string s);


    
    
    
public:
  
    Clock(int h=0, int m=0, int s=0, string i="am");
    ~Clock();        

    int getHH();
    int getMM();
    int getSS();
    int get24HH(); 
    string getMeridiem(); 

    string getView_HH();
    string getView_MM();  
    string getView_SS(); 
    string getView_24HH();
    string getView_meridiem();
    string getView_time();

    void setHH(int h);
    void setMM(int m);
    void setSS(int s);
    void setMeridiem(string i);

    void change_format();
    void view_HH();
    void view_MM();  
    void view_SS(); 
    void change_meridiem(); 

    void change_HH();
    void change_MM();  
    void change_SS(); 
    void view_meridiem();
    void view_time(); 
}; 



