#include "main.h"

using namespace std;    

int main(){ 
    vector<shared_ptr<Curse>> curses; 
    vector<shared_ptr<Student>> students; 
    bool flag = true;
    cout << "Welcome to the Course Management System..." << endl; 
    cout<<"Please first of all, create a curse"<<endl;  
    createCurse(curses); 
    printMenu();
    while (flag){
        int option;
        cin >> option;
        switch (option) {
            case 1: enroll(curses, students); break;
            case 2: unenroll(curses); break;
            case 3: isenroll(curses); break;
            case 4: isFull(curses); break;
            case 5: printCurse(curses); break;
            case 6: makeCopy(curses); break;
            case 7: studentMenu(students); break;
            case 8: createCurse(curses); break;
            case 9: flag = false; break;
            default:
                cout << "Invalid option, please try again." << endl;
        }
        printMenu();
    }
}

void printMenu() {
    cout<<"/////////////////////////////"<<endl;
    cout << "1. Enroll a student" << endl;
    cout << "2. Unenroll a student" << endl;
    cout << "3. Check if a student is enrolled" << endl;
    cout << "4. Check if a course is full" << endl;
    cout << "5. Print course details" << endl;
    cout << "6. Make a copy of a course" << endl;
    cout << "7. See a student" << endl;
    cout << "8. Create a curse" << endl;
    cout << "9. Exit" << endl;
    cout<<"/////////////////////////////"<<endl;
}
void enroll(vector<shared_ptr<Curse>> &curses, vector<shared_ptr<Student>>& students) {
    cout<<"Which student you want to enroll?: "<<endl; 
    string name; 
    getline(cin >> ws, name);
    cout<<"What is the student number?: "<<endl; 
    int studentNumb; 
    cin>>studentNumb; 
    cout<<"In which curse do you want to enroll him?: "<<endl; 
    string curseName; 
    getline(cin >> ws, curseName);
    shared_ptr<Curse> curse = searchCurse(curseName,curses); 
    if(!curse) return;
    shared_ptr<Student> student = make_shared<Student>(name, studentNumb);
    curse->enroll(student);
    students.push_back(student); 

}

void unenroll(vector<shared_ptr<Curse>> &curses) {
    cout<<"What is the student number?: "<<endl; 
    int studentNumb; 
    cin>>studentNumb; 
    cout<<"In which curse do you want to unenroll him?: "<<endl; 
    string curseName; 
    getline(cin >> ws, curseName);
    shared_ptr<Curse> curse = searchCurse(curseName,curses); 
    if(!curse) return;

    curse->unenroll(studentNumb);    

}
void isenroll(vector<shared_ptr<Curse>> &curses) {
    cout<<"What is the student number?: "<<endl; 
    int studentNumb; 
    cin>>studentNumb; 
    cout<<"In which curse do you want to check for ? : "<<endl; 
    string curseName; 
    getline(cin >> ws, curseName);
    shared_ptr<Curse> curse = searchCurse(curseName,curses); 
    if(!curse) return;
    curse->isEnroll(studentNumb) ?  cout << "Student is enrolled." << endl : cout << "Student is not enrolled." << endl;
}
void isFull(vector<shared_ptr<Curse>> &curses) {
    cout<<"Which curse do you want to know if it is full? : "<<endl; 
    string curseName; 
    getline(cin >> ws, curseName);
    shared_ptr<Curse> curse = searchCurse(curseName,curses); 
    if(!curse) return;
    curse->isFull();
}
void printCurse(vector<shared_ptr<Curse>> &curses){
    cout<<"Which curse do you want to print?: "<<endl; 
    string curseName; 
    getline(cin >> ws, curseName);
    shared_ptr<Curse> curse = searchCurse(curseName,curses); 
    if(!curse) return;
    curse->printCurse();   
}
void makeCopy(vector<shared_ptr<Curse>> &curses) {
    cout<<"In which curse do you want to copy?: "<<endl; 
    string curseName; 
    getline(cin >> ws, curseName);
    shared_ptr<Curse> curse = searchCurse(curseName,curses); 
    if(!curse) return;
    cout<<"which name do you want that the new course to have?: "<<endl; 
    string newCourse; 
    getline(cin>>ws, newCourse); 
    shared_ptr<Curse> copy = make_shared<Curse>(curse->makeCopy());
    copy->setName(newCourse); 
    curses.push_back(copy);1
    cout << "Course copied successfully!" << endl;
}

void createCurse( vector<shared_ptr<Curse>>& curses) {
    cout<<"Select a curse name: "<< endl; 
    string curseName; 
    getline(cin >> ws, curseName);
    shared_ptr<Curse> curse = make_shared<Curse>(curseName);
    curses.push_back(curse); 
}   

void studentMenu(vector<shared_ptr<Student>> students){
    bool flag2 = true;
    cout << "Student Menu" << endl;
    cout<<"What is the student number?: "<<endl; 
    int studentNumb; 
    cin>>studentNumb; 
    shared_ptr<Student> student = searchStudent(studentNumb, students); 
    if(student == nullptr) return; 

    while (flag2){
        cout<<"/////////////////////////////"<<endl;
        cout << "1. Add note" << endl;
        cout << "2. Remove note" << endl;
        cout << "3. Print notes" << endl;
        cout << "4. Get averge" << endl; 
        cout << "5. Back to main menu" << endl;
        cout<<"/////////////////////////////"<<endl;

        int option;
        cin >> option;

        switch (option) {
            case 1: addNotes(*student); break;
            case 2: removeNotes(*student); break;
            case 3: printNotes(*student); break;
            case 4: averge(*student); break;
            case 5: flag2= false; break;
            default: cout << "Invalid option, please try again." << endl;
        }
}
}

shared_ptr<Curse> searchCurse(string curseName,vector<shared_ptr<Curse>> curses){
    for(shared_ptr<Curse> curse : curses){ 
        cout<< curseName<<endl; 
        if(curse->getCurseName() == curseName) return curse;
    }
    cout<<"That curse do not exist"<<endl; 
    return nullptr; 
}

void averge(Student& student){ 
    cout<<"the average of "<< student.getName()<< " is "<< student.getAverage()<<endl; 
}

void printNotes(Student& student){
    student.printNotes(); 
}

void addNotes(Student& student){ 
    cout<<"In which course do you want to upload a new note?: "<<endl; 
    string course; 
    getline(cin>> ws, course); 
    cout << "Enter the note to add: " << endl;
    float note;
    cin >> note;
    student.addNote(course, note);
    cout << "Note added successfully!" << endl;

}

void removeNotes(Student& student){
    cout << "In which course do you want to remove a note?: " << endl;
    string course;
    getline(cin >> ws, course);
    student.removeNote(course);
} 

shared_ptr<Student> searchStudent(int studentNum, vector<shared_ptr<Student>> students){ 
    if(students.size()==0) return nullptr; 
    for(shared_ptr<Student> student: students){ 
        if(student->getStudentNumb() == studentNum) return student ; 
    }
    cout<<"the student was not found"<< endl; 
    return nullptr; 
}