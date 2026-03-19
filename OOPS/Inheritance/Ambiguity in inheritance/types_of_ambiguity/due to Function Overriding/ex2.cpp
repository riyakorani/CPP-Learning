#include<iostream>
using namespace std;

class Animal{
public:
    void sound(){
        cout<<"Animal sound"<<endl;
    }
};

class Dog : public Animal{
public:
    void sound(){
        cout<<"Dog barking"<<endl;
    }
};

int main(){

    Dog d;

    d.sound();
    d.Animal::sound();

}