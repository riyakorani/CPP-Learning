// Number → Square → Cube


#include<iostream>
using namespace std;

class Number{
protected:
    int num;

public:
    void setNumber(int n){
        num = n;
    }
};

class Square : public Number{
public:
    int getSquare(){
        return num * num;
    }
};

class Cube : public Square{
public:
    int getCube(){
        return num * num * num;
    }
};

int main(){
    Cube c;

    c.setNumber(3);

    cout<<"Square = "<<c.getSquare()<<endl;
    cout<<"Cube = "<<c.getCube()<<endl;

    return 0;
}