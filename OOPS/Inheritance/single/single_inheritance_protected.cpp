#include<iostream>
using namespace std;

class Base{
protected:
    int a;
};

class Derived : public Base{
public:
    void setValue(){
        a = 50;
    }

    void show(){
        cout << "Value of a is " << a << endl;
    }
};

int main(){
    Derived d;

    d.setValue();
    d.show();

    return 0;
}