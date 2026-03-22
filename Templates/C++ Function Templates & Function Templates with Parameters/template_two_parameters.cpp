#include<iostream>
using namespace std;

template<class T1, class T2>
void show(T1 a, T2 b){
    cout<<"Value 1: "<<a<<endl;
    cout<<"Value 2: "<<b<<endl;
}

int main(){

    show(10, 5.6);
    show('A', 100);

    return 0;
}