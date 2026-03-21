#include<iostream>
using namespace std;

class Number{
protected:
    int num;
public:
    Number(int n){
        num = n;
    }
};

class Square : public Number{
public:
    Square(int n) : Number(n){
        cout<<"Square is "<<num*num<<endl;
    }
};

int main(){
    Square s(6);
}