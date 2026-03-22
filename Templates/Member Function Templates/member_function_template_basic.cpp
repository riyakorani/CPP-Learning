#include<iostream>
using namespace std;

class Calculator
{
public:

    template<class T>
    T add(T a, T b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout<<"Int addition: "<<c.add(4,5)<<endl;

    cout<<"Float addition: "<<c.add(3.5,2.1)<<endl;

    return 0;
}