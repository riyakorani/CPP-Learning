#include<iostream>
using namespace std;

class Car{
public:
    void start(){
        cout<<"Car started"<<endl;
    }
};

class Bike{
public:
    void start(){
        cout<<"Bike started"<<endl;
    }
};

class Vehicle : public Car, public Bike{};

int main(){

    Vehicle v;

    v.Car::start();
    v.Bike::start();
}