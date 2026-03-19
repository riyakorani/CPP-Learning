#include<iostream>
using namespace std;

class Base{
public:
    void say(){
        cout<<"Hello from Base"<<endl;
    }
};

class Derived : public Base{
public:
    void say(){
        cout<<"Hello from Derived"<<endl;
    }
};

int main(){

    Derived d;
    d.say();

    return 0;
}



// Key Difference:---

// Feature          	  Function Overriding	               Ambiguity
// Classes involved      Base + Derived	          Usually multiple base classes
// Function name	          Same	                              Same
// Compiler confusion	      ❌ No	                           ✔ Yes
// Solution	            Derived function runs     	Use ClassName::function()