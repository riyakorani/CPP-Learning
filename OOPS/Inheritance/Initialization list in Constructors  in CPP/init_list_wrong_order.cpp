#include<iostream>
using namespace std;

class Number{
    int a;
    int b;

public:
    Number(int x, int y) : b(y), a(x){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    Number n(2,8);
}