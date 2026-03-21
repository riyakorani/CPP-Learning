#include<iostream>
using namespace std;

class Number{
    int a;
    int b;

public:
    Number(int x, int y) : a(x), b(a+y){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    Number n(3,5);
}