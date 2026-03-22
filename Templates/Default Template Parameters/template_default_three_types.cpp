#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=string>
class Info{
public:
    T1 id;
    T2 salary;
    T3 name;

    Info(T1 i, T2 s, T3 n){
        id = i;
        salary = s;
        name = n;
    }

    void show(){
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main(){

    Info<> emp1(101,50000.5,"Riya");
    emp1.show();

}