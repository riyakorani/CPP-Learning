#include<iostream>
using namespace std;

class Father{
protected:
    int money;

public:
    void setMoney(int m){
        money = m;
    }
};

class Mother{
protected:
    string talent;

public:
    void setTalent(string t){
        talent = t;
    }
};

class Child : public Father, public Mother{
public:
    void show(){
        cout<<"Money from father: "<<money<<endl;
        cout<<"Talent from mother: "<<talent<<endl;
    }
};

int main(){
    Child c;

    c.setMoney(5000);
    c.setTalent("Singing");

    c.show();

    return 0;
}