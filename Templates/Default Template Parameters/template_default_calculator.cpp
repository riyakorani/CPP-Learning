#include<iostream>
using namespace std;

template<class T=int>
class Calculator{
public:
    T a;
    T b;

    Calculator(T x, T y){
        a = x;
        b = y;
    }

    void add(){
        cout<<"Sum = "<<a+b<<endl;
    }

    void multiply(){
        cout<<"Product = "<<a*b<<endl;
    }
};

int main(){

    Calculator<> obj1(5,6);
    obj1.add();
    obj1.multiply();

    cout<<endl;

    Calculator<float> obj2(2.5,3.1);
    obj2.add();
    obj2.multiply();

}   