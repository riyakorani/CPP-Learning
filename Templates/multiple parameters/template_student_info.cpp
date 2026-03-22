#include<iostream>
using namespace std;

template<class T1, class T2>
class Student{
public:
    T1 roll;
    T2 grade;

    Student(T1 r, T2 g){
        roll = r;
        grade = g;
    }

    void display(){
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

int main(){

    Student<int,char> s1(101,'A');
    s1.display();

    return 0;
}