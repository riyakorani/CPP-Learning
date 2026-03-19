#include<iostream>
using namespace std;

class Parent{
public:
    void speak(){
        cout<<"Parent speaking"<<endl;
    }
};

class Child : public Parent{
public:
    void speak(){
        cout<<"Child speaking"<<endl;
    }
};

int main(){

    Child c;

    c.speak();
    c.Parent::speak();

}