#include<iostream>
using namespace std;

template<class T>
T square(T a){
    return a*a;
}

int main(){

    cout<<"Square of 5 = "<<square(5)<<endl;
    cout<<"Square of 2.5 = "<<square(2.5)<<endl;

    return 0;
}