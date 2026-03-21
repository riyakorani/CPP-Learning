#include<iostream>
using namespace std;

class Number{
    int a;
    int b;

public:
    Number(int x, int y) : a(x), b(x+y){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    Number n(4,6);
}