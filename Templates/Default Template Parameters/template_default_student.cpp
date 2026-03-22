#include<iostream>
using namespace std;

template<class T1=int, class T2=char>
class Student{
public:
    T1 roll;
    T2 grade;

    Student(T1 r, T2 g){
        roll = r;
        grade = g;
    }

    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

int main(){

    Student<> s1(101,'A');  // default types
    s1.display();

    cout<<endl;

    Student<int,char> s2(102,'B');
    s2.display();

}