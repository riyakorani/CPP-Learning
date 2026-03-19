#include<iostream>
using namespace std;

class Person{
public:
    string name;
};

class Student : public Person{
public:
    int roll;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

int main(){
    Student s;

    s.name = "Riya";
    s.roll = 101;

    s.display();

    return 0;
}