#include<iostream>
using namespace std;

class Person{
public:
    void info(){
        cout<<"This is a person"<<endl;
    }
};

class Student : public Person{
};

class Employee : public Person{
};

class Intern : public Student, public Employee{
};

int main(){

    Intern i;

    i.Student::info();
}