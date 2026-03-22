#include<iostream>
using namespace std;

template<class T1, class T2>
class SwapValues{
public:
    T1 a;
    T2 b;

    SwapValues(T1 x, T2 y){
        a = x;
        b = y;
    }

    void display(){
        cout<<"Before Swap: "<<a<<" "<<b<<endl;

        auto temp = a;
        a = b;
        b = temp;

        cout<<"After Swap: "<<a<<" "<<b<<endl;
    }
};

int main(){

    SwapValues<int,int> obj(5,10);
    obj.display();

    return 0;
}