#include<iostream>
using namespace std;

class Base{
protected:
    int x;
};

class Derived : public Base{
public:
    void setValue(){
        x = 10;
    }

    void display(){
        cout << "Value of x is " << x << endl;
    }
};

int main(){
    Derived d;
    d.setValue();
    d.display();

    return 0;
}