#include<iostream>
using namespace std;

class Student{
public:
    int roll;

    void setRoll(int r){
        roll = r;
    }
};

class Exam : public Student{
public:
    int marks;

    void setMarks(int m){
        marks = m;
    }

    void display(){
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Exam e;

    e.setRoll(12);
    e.setMarks(95);

    e.display();

    return 0;
}