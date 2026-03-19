#include<iostream>
using namespace std;

class Base{
protected:
    int a;

public:
    void setA(){
        a = 5;
    }
};

class Derived : protected Base{
public:
    void show(){
        setA();
        cout << "Value of a is " << a << endl;
    }
};

int main(){
    Derived d;
    d.show();

    return 0;
}