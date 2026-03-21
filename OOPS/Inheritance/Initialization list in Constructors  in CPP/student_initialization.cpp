#include<iostream>
using namespace std;

class Student{
    int roll;
    int marks;

public:
    Student(int r, int m) : roll(r), marks(m) {}

    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    Student s(101, 95);
    s.display();
}