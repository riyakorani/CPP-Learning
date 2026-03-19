#include<iostream>
using namespace std;

class Computer{
public:
    void run(){
        cout<<"Computer running"<<endl;
    }
};

class Laptop : public Computer{
public:
    void run(){
        cout<<"Laptop running"<<endl;
    }
};

int main(){

    Laptop l;

    l.run();
    l.Computer::run();

}