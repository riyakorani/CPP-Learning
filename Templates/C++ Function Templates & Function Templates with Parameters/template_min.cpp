#include<iostream>
using namespace std;

template<class T>
T minimum(T a, T b){
    return (a < b) ? a : b;
}

int main(){

    cout<<"Minimum of 8 and 3 = "<<minimum(8,3)<<endl;
    cout<<"Minimum of 2.5 and 1.4 = "<<minimum(2.5,1.4)<<endl;

    return 0;
}