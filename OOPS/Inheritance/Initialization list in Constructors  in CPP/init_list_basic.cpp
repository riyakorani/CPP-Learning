#include<iostream>
using namespace std;

class Number{
    int a;
    int b;

public:
    Number(int x, int y) : a(x), b(y){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

int main(){
    Number n(5,7);
}