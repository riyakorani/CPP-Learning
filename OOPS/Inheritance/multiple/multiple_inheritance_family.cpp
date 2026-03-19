#include<iostream>
using namespace std;

class Father{
protected:
    int height;

public:
    void setHeight(int h){
        height = h;
    }
};

class Mother{
protected:
    string eyeColor;

public:
    void setEyeColor(string e){
        eyeColor = e;
    }
};

class Child : public Father, public Mother{
public:
    void show(){
        cout<<"Height from father: "<<height<<" cm"<<endl;
        cout<<"Eye color from mother: "<<eyeColor<<endl;
    }
};

int main(){
    Child c;

    c.setHeight(175);
    c.setEyeColor("Brown");

    c.show();

    return 0;
}