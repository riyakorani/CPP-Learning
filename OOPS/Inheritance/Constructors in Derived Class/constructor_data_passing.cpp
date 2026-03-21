#include<iostream>
using namespace std;

class Person{
protected:
    int age;

public:
    Person(int a){
        age = a;
    }
};

class Student : public Person{
    int marks;

public:
    Student(int a,int m) : Person(a){
        marks = m;
    }

    void display(){
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    Student s(20,95);
    s.display();
}