#include<iostream>
using namespace std;

template<class T1=int, class T2=float>
class Data{
public:
    T1 a;
    T2 b;

    Data(T1 x, T2 y){
        a = x;
        b = y;
    }

    void show(){
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
};

int main(){

    Data<> obj1(5, 3.2);   // uses default int and float
    obj1.show();

    cout<<endl;

    Data<float,char> obj2(4.5,'A');  // custom types
    obj2.show();

}