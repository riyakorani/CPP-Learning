#include<iostream>
using namespace std;

class Vehicle{
public:
    void start(){
        cout<<"Vehicle starts"<<endl;
    }
};

class Car : public Vehicle{
};

class Boat : public Vehicle{
};

class AmphibiousVehicle : public Car, public Boat{
};

int main(){

    AmphibiousVehicle a;

    a.Car::start();
    a.Boat::start();

}