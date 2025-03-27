#include "clock.h" 



bool Clock::check_parametrs(int h, int m, int s, string i){ 
    return (check_HH(h) && check_MM(m) && check_MM(s) && check_meridem(i)); 
}

bool Clock::check_HH(int h){ 
    return !(h<0 || h>12);
}   
bool Clock::check_MM(int m){ 
    return !(m<0 || m>60);
}   
bool Clock::check_meridem(string s){ 
    return !(s != "am" && s != "pm");
}   

int Clock::getHH(){
    return this->HH; 
}

int Clock::getMM(){
    return this->MM; 
}

int Clock::getSS(){
    return this->SS; 
}

string Clock::getMeridiem(){ 
    return this->meridiem_indic; 
}







void Clock::change_format(){

    
}

Clock::Clock(int h=0, int m=0, int s=0, string i="am")
    : HH {h}, MM {m}, SS {s}, meridiem_indic {i}{ 
    if(!check_parametrs(h,m,s,i)) throw invalid_argument("Pusiste cualquier cosa "); 
    }

string Clock::getView_HH(){ 
    ostringstream oss; 
    oss << setfill('0') << setw(2) << this->HH; 
    return oss.str(); 
}
void Clock::getView_MM(){ 
    cout<< setfill('0')<<setw(2)<<this->MM;  
}

void Clock::getView_SS(){ 
    cout<<setfill('0')<<setw(2)<<this->SS; 
}

void Clock::getView_meridiem(){ 
    cout<<setfill('0')<<setw(2)<<this->meridiem_indic; 
} 

void Clock::view_HH(){
    getView_HH();
    cout<<endl; 
}

void Clock::view_HH(){
    getView_MM();
    cout<<endl; 
}

void Clock::view_HH(){
    getView_SS(); 
    cout<<endl; 
}

void Clock::view_HH(){
    getView_meridiem(); 
    cout<<endl; 
}

void Clock::view_time(){ 
    getView_HH(); 
    cout<<":"; 
    getView_MM();
    cout<<":";
    getView_SS(); 
    getView_meridiem(); 
    cout<<endl; 
}

Clock::~Clock(){}

