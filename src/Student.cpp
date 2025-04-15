#include "Student.h"

Student::Student(){
    cout << "Student constructor" << endl;
}

Student* Student::getInstance(){
    if(obj == nullptr) obj = new Student();
    return obj;
}

string Student::add(string name){
    studentList.push_back(name);
}

string Student::remove(string name){

}

string Student::display(string){

}

Student::~Student(){
    cout << "Student distructor" << endl;
}

Student* Student::obj = nullptr;