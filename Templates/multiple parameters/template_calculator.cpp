#include<iostream>
using namespace std;

template<class T1, class T2>
class Calculator{
public:
    T1 num1;
    T2 num2;

    Calculator(T1 a, T2 b){
        num1 = a;
        num2 = b;
    }

    void display(){
        cout<<"Addition = "<<num1 + num2<<endl;
        cout<<"Multiplication = "<<num1 * num2<<endl;
    }
};

int main(){

    Calculator<int,float> obj(5,2.5);
    obj.display();

    return 0;
}