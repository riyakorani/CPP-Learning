#include<iostream>
using namespace std;

template<class T1, class T2>
class Pair{
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b){
        first = a;
        second = b;
    }

    void show(){
        cout<<"First: "<<first<<endl;
        cout<<"Second: "<<second<<endl;
    }
};

int main(){

    Pair<int,float> p1(10,5.5);
    p1.show();

    return 0;
}