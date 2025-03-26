#include "clock.h" 


bool Clock::check_parametrs(int h, int m, int s, string i){ 
    if( h<0 ||m<0 || s<0 ||  h>12 || m>60 || s> 60 || ( i != "am" && i != "pm")) { 
        return 0; 
    }
    return 1; 
}

void Clock::change_format(){
    
    
}

Clock::Clock(int h=0, int m=0, int s=0, string i="am")
    : HH {h}, MM {m}, SS {s}, meridiem_indic {i}{ 
    if(!check_parametrs(h,m,s,i)) throw invalid_argument("Pusiste cualquier cosa down"); 
    }

Clock::~Clock(){}

