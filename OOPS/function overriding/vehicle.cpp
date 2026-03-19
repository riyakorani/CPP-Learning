#include<iostream>
using namespace std;

class Vehicle{
public:
    void start(){
        cout<<"Vehicle starts"<<endl;
    }
};

class Car : public Vehicle{
public:
    void start(){
        cout<<"Car starts with key"<<endl;
    }
};

int main(){

    Vehicle v;
    Car c;

    v.start();
    c.start();

    return 0;
}