#include<iostream>
using namespace std;

class Base1{
public:
    int value = 10;
};

class Base2{
public:
    int value = 20;
};

class Derived : public Base1, public Base2{
};

int main(){

    Derived d;

    cout<<"Base1 value = "<<d.Base1::value<<endl;
    cout<<"Base2 value = "<<d.Base2::value<<endl;

    return 0;
}