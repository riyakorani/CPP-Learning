#include<iostream>
using namespace std;

template<class T1, class T2>
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

    Data<int,char> obj1(10,'A');
    obj1.show();

    Data<float,int> obj2(5.5,20);
    obj2.show();

    return 0;
}