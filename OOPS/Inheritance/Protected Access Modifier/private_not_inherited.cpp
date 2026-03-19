#include<iostream>
using namespace std;

class Base{
protected:
    int a;

private:
    int b;
};

class Derived : public Base{
public:
    void setData(){
        a = 10;   // allowed
        // b = 20; // ERROR
    }

    void show(){
        cout << "Value of a is " << a << endl;
    }
};

int main(){
    Derived d;
    d.setData();
    d.show();

    return 0;
}