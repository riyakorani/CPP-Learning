#include<iostream>
using namespace std;

class Animal{
public:
    void sound(){
        cout<<"Animal makes sound"<<endl;
    }
};

class Dog : public Animal{
public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){

    Dog d;

    d.sound();          // child function
    d.Animal::sound();  // base class function

    return 0;
}