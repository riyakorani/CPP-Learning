#include<iostream>
using namespace std;

template<class T>
T maximum(T a, T b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    cout<<"Max of 5 and 10 = "<<maximum(5,10)<<endl;
    cout<<"Max of 3.4 and 7.8 = "<<maximum(3.4,7.8)<<endl;
    cout<<"Max of A and Z = "<<maximum('A','Z')<<endl;

    return 0;
}