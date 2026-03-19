#include<iostream>
using namespace std;

class Person{
public:
    void show(){
        cout<<"I am a person"<<endl;
    }
};

class Student : public Person{
public:
    void show(){
        cout<<"I am a student"<<endl;
    }
};

int main(){

    Person p;
    Student s;

    p.show();
    s.show();

    return 0;
}