#include<iostream>
using namespace std;

template<class T>
T multiply(T a, T b){
    return a * b;
}

int main(){

    cout<<"Multiplication of 4 and 5 = "<<multiply(4,5)<<endl;
    cout<<"Multiplication of 2.5 and 3.5 = "<<multiply(2.5,3.5)<<endl;

    return 0;
}