#include<iostream>
using namespace std;

class A{
protected:
    int x;
};

class B : public A{
public:
    void setX(){
        x = 50;
    }
};

class C : public B{
public:
    void display(){
        cout << "Value of x is " << x << endl;
    }
};

int main(){
    C obj;
    obj.setX();
    obj.display();

    return 0;
}