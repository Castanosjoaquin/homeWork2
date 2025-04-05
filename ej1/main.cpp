#include "main.h"

int main(){ 
    std::cout << "Select an option:" << std::endl;
    std::cout << "1. test of the constructor" << std::endl;
    std::cout << "2. test of wrong parametrs" << std::endl;
    std::cout << "3. test of change time" << std::endl;
    std::cout << "4. test of show time" << std::endl;
    std::cout << "5. Salir" << std::endl;
    bool flag = true;

    while (flag){ 
        int option;
        cin >> option;
    
        try{ 
            switch (option){
                case 1:
                    testConstructor(option); //bucle cuando pasa un string, el tema es es q castea int el character
                    break;
                case 2:{   
                    cout<<"A clock with invalid parameters is trying to be inizalied"<<endl;
                    Clock clock(25, 61, 61);
                    break;}
                case 3: 
                    changingTime(); 
                    break;
                case 4:
                    showTime();
                    break;
                case 5: 
                    flag = false;
                    break;
                default: 
                    cout<<"invalid option, try again"<<endl; 
                }   
            std::cout << "Select an option:" << std::endl;
            std::cout << "1. test of the constructor" << std::endl;
            std::cout << "2. test of wrong parametrs" << std::endl;
            std::cout << "3. test of change time" << std::endl;
            std::cout << "4. test of show time" << std::endl;
            std::cout << "5. Salir" << std::endl;
        } 
    catch(invalid_argument &e){ 
        cout<<"Invalid argument, try again "<<e.what()<<endl; 
        std::cout << "Select an option:" << std::endl;
        std::cout << "1. test of the constructor" << std::endl;
        std::cout << "2. test of wrong parametrs" << std::endl;
        std::cout << "3. test of change time" << std::endl;
        std::cout << "4. test of show time" << std::endl;
        std::cout << "5. Salir" << std::endl;
        }
    }
}   

void testConstructor(int option){ 
    std::cout << "Select an option: " << std::endl;
    std::cout << "1. only HH" << std::endl;
    std::cout << "2. HH and MM" << std::endl;
    std::cout << "3. HH, MM and SS" << std::endl;
    std::cout << "4. Full" << std::endl;
    
    cin>>option; 
    switch (option){
        case 1:{
            cout<<"Enter the hour: "; 
            int h; 
            cin>>h; 
            Clock clock(h); 
            clock.view_time();
            break;
        }
        case 2:{ 
            cout<<"Enter the hour: "; 
            int h; 
            cin>>h; 
            cout<<"Enter the minutes: ";
            int m;
            cin>>m;
            Clock clock(h,m);
            clock.view_time();
            break;
        }
        case 3:{
            cout<<"Enter the hour: ";  
            int h;
            cin>>h;
            cout<<"Enter the minutes: ";
            int m;
            cin>>m;
            cout<<"Enter the seconds: ";
            int s;
            cin>>s;
            Clock clock(h,m,s);
            clock.view_time();
            break;
        }
        case 4:{
            cout<<"Enter the hour: ";
            int h;
            cin>>h;
            cout<<"Enter the minutes: ";
            int m;
            cin>>m;
            cout<<"Ebter the seconds: ";
            int s;
            cin>>s;
            cout<<"Enter the meridiem indicator: ";
            string f;
            cin>>f;
            Clock clock(h,m,s,f);
            clock.view_time();
            break;
            
        }
        default: 
            cout<<"invalid option, try again "<<endl;
        }	 
        cout<<"\n";	
}

void changingTime(){ 
    Clock clock;
    clock.view_time();
    cout <<"Which parameters do you want to change: "<<endl;
    cout <<"1. HH"<<endl;
    cout <<"2. MM"<<endl;
    cout <<"3. SS"<<endl;
    cout <<"4. AM/PM"<<endl;
    int option;
    cin>>option;
    switch (option){
        case 1:{
            cout<<"Enter the hour: "; 
            int h; 
            cin>>h; 
            clock.setHH(h);
            clock.view_time();
            break;
        }
        case 2:{ 
            cout<<"Enter the minutes: ";
            int m;
            cin>>m;
            clock.setMM(m);
            clock.view_time();
            break;
        }
        case 3:{
            cout<<"Enter the seconds ";
            int s;
            cin>>s;
            clock.setSS(s);
            clock.view_time();
            break;
        }
        case 4:{
            cout<<"Enter the meridiem indicator: ";
            string f;
            cin>>f;
            cout<<f<<endl;
            clock.setMeridiem(f);
            clock.view_time();
            break;   
        }
        default: 
            cout<<"invalid option, try again "<<endl;
            break;
        }	 
        cout<<"\n";
}

void showTime(){ 
    Clock clock(12, 30, 45, "am");
    cout << "Current time: ";   
    clock.view_time();
    cout << "Change format to 24 hours: ";
    clock.change_format();
    cout<<"The hh parameter is: "<<endl;
    clock.view_HH();
    cout<<"The mm parameter is: "<<endl;
    clock.view_MM();
    cout<<"The ss parameter is: "<<endl;
    clock.view_SS();
    cout<<"The meridiem parameter is: "<<endl;
    clock.view_meridiem();  
    
}