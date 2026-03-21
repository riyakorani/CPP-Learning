#include<iostream>
using namespace std;

class Base{
    int x;

public:
    Base(int a){
        x = a;
        cout<<"Base constructor called with "<<x<<endl;
    }
};

class Derived : public Base{
    int y;

public:
    Derived(int a,int b) : Base(a){
        y = b;
        cout<<"Derived constructor called with "<<y<<endl;
    }
};

int main(){
    Derived obj(5,10);
}