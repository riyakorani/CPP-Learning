#include<iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    float a = 2.5;
    float b = 7.8;

    swapp(a,b);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}