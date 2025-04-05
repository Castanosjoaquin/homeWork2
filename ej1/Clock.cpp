#include "Clock.h" 

Clock::Clock(int h, int m, int s, string i)
    : HH {h}, MM {m}, SS {s}, meridiem_indic {i}{ 
    check_parametrs(h,m,s,i); 
}
Clock::~Clock(){ 
    cout<<"the clock was left to pieces"<<endl; 
}
void Clock::check_parametrs(int h, int m, int s, string i){ 
    if(!(check_HH(h)||check_MM(m)||check_MM(s)||check_meridem(i))) throw invalid_argument("La hora no es correcta");
}

bool Clock::check_HH(int h){ 
    return !(h<0 || h>12 || !(typeid(h) == typeid(int))); 
}   
bool  Clock::check_MM(int m){ 
    return !(m<0 || m>59||!(typeid(m) == typeid(int))) ;
}   
bool  Clock::check_meridem(string s){  
    return(s == "am" || s == "pm"); 
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

string Clock::getView_HH(){ 
        ostringstream oss; 
        oss << setfill('0') << setw(2) << this->HH; 
        return oss.str(); 
}
    
string Clock::getView_MM(){ 
    ostringstream oss; 
    oss << setfill('0') << setw(2) << this->MM; 
    return oss.str(); 
}

string Clock::getView_SS(){ 
    ostringstream oss; 
    oss << setfill('0') << setw(2) << this->SS; 
    return oss.str(); 
} 

int Clock::get24HH(){ 
    if(this->meridiem_indic == "am") return ((HH == 12) ? 0 : HH);
    else return (HH == 12) ? 12 : HH + 12;
}

string Clock::getView_24HH(){ 
    ostringstream oss; 
    oss << setfill('0') << setw(2) << get24HH(); 
    return oss.str(); 
}

void Clock::setHH(int h){ 
    if(check_HH(h)) this->HH = h; 
    else throw invalid_argument("invalid argument"); 
}

void Clock::setMM(int m){ 
    if(check_MM(m)) this->MM = m; 
    else throw invalid_argument("invalid argument"); 
}

void Clock::setSS(int s){ 
    if(check_MM(s)) this->SS = s; 
    else throw invalid_argument("invalid argument"); 
}
void Clock::setMeridiem(string i){ 
    if(check_meridem(i)) this->meridiem_indic = i; 
    else throw invalid_argument("invalid argument"); 
}


void Clock::change_HH(){ 
    int h; 
    cout<<"Enter the time: "; 
    cin>>h; 
    setHH(h); 
}

void Clock::change_MM(){ 
    int m; 
    cout<<"Enter the minutes: "; 
    cin>>m; 
    setMM(m); 
}

void Clock::change_SS(){ 
    int s; 
    cout<<"Enter the seconds: "; 
    cin>>s; 
    setSS(s); 
}

void Clock::change_meridiem(){ 
    string i; 
    cout<<"Enter the meridiem indicator "; 
    cin>>i; 
    setMeridiem(i); 
}

void Clock::view_HH(){
    cout<<getView_HH()<<endl;
}

void Clock::view_MM(){  
    cout<<getView_MM()<<endl; 
}

void Clock::view_SS(){
    cout<<getView_SS()<<endl; 
}

void Clock::view_meridiem(){
    cout<<this->meridiem_indic<<endl; 
}

void Clock::view_time(){ 
    cout<<getView_HH()<<":"<<getView_MM()<<":"<<getView_SS()<<" "<<this->meridiem_indic<<endl; 
}

void Clock::change_format(){ 
    cout<<getView_24HH()<<":"<<getView_MM()<<":"<<getView_SS()<<endl;  
}
