#include<iostream>
using namespace std;

class Test1{
protected:
    int marks1;

public:
    void setMarks1(int m){
        marks1 = m;
    }
};

class Test2{
protected:
    int marks2;

public:
    void setMarks2(int m){
        marks2 = m;
    }
};

class Result : public Test1, public Test2{
public:
    void display(){
        cout<<"Marks1: "<<marks1<<endl;
        cout<<"Marks2: "<<marks2<<endl;
        cout<<"Total: "<<marks1 + marks2<<endl;
    }
};

int main(){

    Result r;

    r.setMarks1(85);
    r.setMarks2(90);

    r.display();

    return 0;
}