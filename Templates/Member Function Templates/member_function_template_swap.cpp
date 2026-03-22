#include<iostream>
using namespace std;

class Utility
{
public:

    template<class T>
    void swapValues(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    Utility u;

    int x = 5, y = 10;

    u.swapValues(x,y);

    cout<<"x = "<<x<<" y = "<<y<<endl;

    return 0;
}