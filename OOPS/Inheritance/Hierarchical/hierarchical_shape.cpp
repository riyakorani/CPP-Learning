#include<iostream>
using namespace std;

class Shape{
public:
    void color(){
        cout<<"Shape has color"<<endl;
    }
};

class Circle : public Shape{
public:
    void drawCircle(){
        cout<<"Drawing Circle"<<endl;
    }
};

class Rectangle : public Shape{
public:
    void drawRectangle(){
        cout<<"Drawing Rectangle"<<endl;
    }
};

int main(){

    Circle c;
    Rectangle r;

    c.color();
    c.drawCircle();

    r.color();
    r.drawRectangle();

}