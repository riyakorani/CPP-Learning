// 2️⃣ Ambiguity due to Function Overriding

// When derived class creates a function with the
// same name as base class function.

// Example:--
#include<iostream>
using namespace std;

class Base{
public:
    void show(){
        cout<<"Base class function"<<endl;
    }
};

class Derived : public Base{
public:
    void show(){
        cout<<"Derived class function"<<endl;
    }
};

int main(){

    Derived d;
    d.show();          // Derived function runs
    d.Base::show();    // Access base function

    return 0;
}

// Output:-
// Derived class function
// Base class function

// ✔ Derived function overrides base function.
