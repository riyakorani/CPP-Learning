#include<iostream>
using namespace std;

class English{
public:
    void marks(){
        cout<<"English marks"<<endl;
    }
};

class Maths{
public:
    void marks(){
        cout<<"Maths marks"<<endl;
    }
};

class Result : public English, public Maths{};

int main(){

    Result r;

    r.English::marks();
    r.Maths::marks();

}