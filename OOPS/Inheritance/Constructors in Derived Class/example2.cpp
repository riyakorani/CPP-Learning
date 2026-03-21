#include<iostream>
using namespace std;

class Base{
    int x;
public:
    Base(int a){
        x = a;
        cout<<"Base constructor called"<<endl;
    }

    void show(){
        cout<<"Value of x is "<<x<<endl;
    }
};

class Derived : public Base{
    int y;
public:
    Derived(int a,int b) : Base(a){
        y = b;
        cout<<"Derived constructor called"<<endl;
    }

    void display(){
        cout<<"Value of y is "<<y<<endl;
    }
};

int main(){
    Derived obj(10,20);
    obj.show();
    obj.display();
}