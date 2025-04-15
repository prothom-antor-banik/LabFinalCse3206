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
    return name;
}

string Student::remove(string name){
    for(int i=0; i<studentList.size(); i++){
        if(studentList[i] == name){
            studentList.erase(studentList.begin()+i);
            return name;
        }
    }
    return "NONE";
}

void Student::display(){
    for(int i=0; i<studentList.size(); i++){
        cout << studentList[i] << endl;
    }
}

Student::~Student(){
    cout << "Student distructor" << endl;
}

Student* Student::obj = nullptr;

// int main(){
//     Student* s = Student::getInstance();

//     s->add("antor");
//     s->display();
//     s->add("prothom");
//     s->add("antor");
//     s->display();
//     cout << "remove " << s->remove("antor") << endl;
//     s->display();
// }