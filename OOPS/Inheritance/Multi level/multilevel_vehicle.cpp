#include<iostream>
using namespace std;

class Vehicle{
protected:
    int speed;

public:
    void setSpeed(int s){
        speed = s;
    }
};

class Car : public Vehicle{
protected:
    int seats;

public:
    void setSeats(int s){
        seats = s;
    }
};

class SportsCar : public Car{
public:
    void display(){
        cout<<"Speed: "<<speed<<" km/h"<<endl;
        cout<<"Seats: "<<seats<<endl;
    }
};

int main(){
    SportsCar s;

    s.setSpeed(300);
    s.setSeats(2);

    s.display();

    return 0;
}