#include<iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    int x = 10;
    int y = 20;

    cout<<"Before Swap"<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;

    swapp(x,y);

    cout<<"After Swap"<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;

}