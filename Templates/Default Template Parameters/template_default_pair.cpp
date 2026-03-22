#include<iostream>
using namespace std;

template<class T1=int, class T2=int>
class Pair{
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b){
        first = a;
        second = b;
    }

    void show(){
        cout<<"First = "<<first<<endl;
        cout<<"Second = "<<second<<endl;
    }
};

int main(){

    Pair<> p1(10,20);
    p1.show();

    cout<<endl;

    Pair<float,int> p2(3.5,7);
    p2.show();

}