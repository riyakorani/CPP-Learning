#include<iostream>
using namespace std;

class University{
public:
    void universityName(){
        cout<<"XYZ University"<<endl;
    }
};

class Engineering : public University{
};

class Medical : public University{
};

class Research : public Engineering, public Medical{
};

int main(){

    Research r;

    r.Engineering::universityName();

}