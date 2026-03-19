#include<iostream>
using namespace std;

class Father{
public:
    void showFather(){
        cout<<"This is father class"<<endl;
    }
};

class Mother{
public:
    void showMother(){
        cout<<"This is mother class"<<endl;
    }
};

class Child : public Father, public Mother{
public:
    void showChild(){
        cout<<"This is child class"<<endl;
    }
};

int main(){

    Child c;

    c.showFather();
    c.showMother();
    c.showChild();

    return 0;
}