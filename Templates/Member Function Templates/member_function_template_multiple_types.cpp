#include<iostream>
using namespace std;

class Calculator
{
public:

    template<class T1, class T2>
    auto multiply(T1 a, T2 b)
    {
        return a * b;
    }
};

int main()
{
    Calculator c;

    cout<<"Multiplication: "<<c.multiply(4,2.5)<<endl;

    cout<<"Multiplication: "<<c.multiply(3,5)<<endl;

    return 0;
}