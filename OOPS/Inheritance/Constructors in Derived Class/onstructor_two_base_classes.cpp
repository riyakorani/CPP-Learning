#include<iostream>
using namespace std;

class Student{
protected:
    int roll;
public:
    Student(int r){
        roll = r;
    }
};

class Marks{
protected:
    int marks;
public:
    Marks(int m){
        marks = m;
    }
};

class Result : public Student, public Marks{
public:
    Result(int r,int m) : Student(r), Marks(m){
        cout<<"Roll number: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    Result obj(21,95);
}