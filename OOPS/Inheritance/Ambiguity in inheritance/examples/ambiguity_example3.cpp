#include<iostream>
using namespace std;

class Parent1{
public:
    void message(){
        cout<<"Message from Parent1"<<endl;
    }
};

class Parent2{
public:
    void message(){
        cout<<"Message from Parent2"<<endl;
    }
};

class Child : public Parent1, public Parent2{
public:
    void message(){
        Parent1::message();
    }
};

int main(){

    Child c;
    c.message();

    return 0;
}