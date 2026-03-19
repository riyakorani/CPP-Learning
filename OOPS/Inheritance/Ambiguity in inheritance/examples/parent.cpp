#include<iostream>
using namespace std;

class Father{
public:
    void advice(){
        cout<<"Work hard"<<endl;
    }
};

class Mother{
public:
    void advice(){
        cout<<"Stay healthy"<<endl;
    }
};

class Child : public Father, public Mother{
};

int main(){

    Child c;

    c.Father::advice();
    c.Mother::advice();

}