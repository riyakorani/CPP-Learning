// 1️⃣ Ambiguity due to Multiple Inheritance

// This happens when two base classes have the same function name 
// and the derived class inherits both.

// Example:---
#include<iostream>
using namespace std;

class A{
public:
    void greet(){
        cout<<"Hello from A"<<endl;
    }
};

class B{
public:
    void greet(){
        cout<<"Hello from B"<<endl;
    }
};

class C : public A, public B{
};

int main(){

    C obj;
    // obj.greet();  ❌ Ambiguity

    obj.A::greet();
    obj.B::greet();

    return 0;
}

// Output:--
// Hello from A
// Hello from B


// ✔ We solve it using scope resolution operator ::
// obj.A::greet();
// obj.B::greet();