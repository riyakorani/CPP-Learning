#include<iostream>
using namespace std;

class Employee{
public:
    void work(){
        cout<<"Employee works"<<endl;
    }
};

class Manager : public Employee{
public:
    void manage(){
        cout<<"Manager manages team"<<endl;
    }
};

class Developer : public Employee{
public:
    void code(){
        cout<<"Developer writes code"<<endl;
    }
};

int main(){

    Manager m;
    Developer d;

    m.work();
    m.manage();

    d.work();
    d.code();

}