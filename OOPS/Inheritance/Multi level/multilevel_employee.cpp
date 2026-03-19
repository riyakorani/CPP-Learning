#include<iostream>
using namespace std;

class Person{
protected:
    string name;

public:
    void setName(string n){
        name = n;
    }

    void displayName(){
        cout<<"Name: "<<name<<endl;
    }
};

class Employee : public Person{
protected:
    int empID;

public:
    void setID(int id){
        empID = id;
    }

    void displayID(){
        cout<<"Employee ID: "<<empID<<endl;
    }
};

class Manager : public Employee{
public:
    void displayManager(){
        cout<<"Manager Name: "<<name<<endl;
        cout<<"Manager ID: "<<empID<<endl;
    }
};

int main(){
    Manager m;

    m.setName("Riya");
    m.setID(101);

    m.displayName();
    m.displayID();
    m.displayManager();

    return 0;
}