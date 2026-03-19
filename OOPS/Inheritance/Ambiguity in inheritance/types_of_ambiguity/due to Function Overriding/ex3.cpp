#include<iostream>
using namespace std;

class Shape{
public:
    void draw(){
        cout<<"Drawing shape"<<endl;
    }
};

class Circle : public Shape{
public:
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};

int main(){

    Circle c;

    c.draw();
    c.Shape::draw();

}