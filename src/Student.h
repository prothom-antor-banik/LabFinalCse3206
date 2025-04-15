#include<iostream>
#include<vector>

using namespace std;

class Student{
    static Student* obj;
    vector<string> studentList;
    Student();
public:
    static Student* getInstance();
    string add(string);
    string remove(string);
    void display();
    ~Student();
};