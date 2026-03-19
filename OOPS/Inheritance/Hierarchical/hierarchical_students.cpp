#include<iostream>
using namespace std;

class Student{
public:
    void study(){
        cout<<"Student is studying"<<endl;
    }
};

class Engineering : public Student{
public:
    void coding(){
        cout<<"Engineering student codes"<<endl;
    }
};

class Medical : public Student{
public:
    void surgery(){
        cout<<"Medical student practices surgery"<<endl;
    }
};

int main(){

    Engineering e;
    Medical m;

    e.study();
    e.coding();

    m.study();
    m.surgery();

}