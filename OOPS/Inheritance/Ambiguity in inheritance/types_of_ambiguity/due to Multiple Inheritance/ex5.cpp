#include<iostream>
using namespace std;

class Father{
public:
    void work(){
        cout<<"Father working"<<endl;
    }
};

class Mother{
public:
    void work(){
        cout<<"Mother working"<<endl;
    }
};

class Child : public Father, public Mother{};

int main(){

    Child c;

    c.Father::work();
    c.Mother::work();

}