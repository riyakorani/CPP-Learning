#include<iostream>
using namespace std;

class A{
public:
    A(int x){
        cout<<"Constructor of A "<<x<<endl;
    }
};

class B{
public:
    B(int y){
        cout<<"Constructor of B "<<y<<endl;
    }
};

class C : public A, public B{
public:
    C(int a,int b) : A(a), B(b){
        cout<<"Constructor of C"<<endl;
    }
};

int main(){
    C obj(5,10);
}