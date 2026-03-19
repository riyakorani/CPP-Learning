#include<iostream>
using namespace std;

class Teacher{
public:
    void info(){
        cout<<"Teacher info"<<endl;
    }
};

class Student{
public:
    void info(){
        cout<<"Student info"<<endl;
    }
};

class Person : public Teacher, public Student{};

int main(){

    Person p;

    p.Teacher::info();
    p.Student::info();

}