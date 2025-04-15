#include<iostream>
#include<vector>

using namespace std;

class Student{
    static Student* obj;
    vector<string> studentList;
public:
    Student();
    static Student* getInstance();
    string add(string);
    string remove(string);
    void display();
    ~Student();
};