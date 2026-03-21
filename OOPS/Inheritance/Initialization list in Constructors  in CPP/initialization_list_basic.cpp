#include<iostream>
using namespace std;

class Test{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout<<"Constructor executed"<<endl;
    }

    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    Test t(10, 20);
    t.display();
}