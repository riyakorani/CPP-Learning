#include<iostream>
using namespace std;

class Device{
public:
    void powerOn(){
        cout<<"Device powered on"<<endl;
    }
};

class Phone : public Device{
};

class Camera : public Device{
};

class SmartPhone : public Phone, public Camera{
};

int main(){

    SmartPhone s;

    s.Phone::powerOn();
}