#include<iostream>
using namespace std;

template<class T>
void show(T a)
{
    cout<<"One parameter: "<<a<<endl;
}

template<class T>
void show(T a, T b)
{
    cout<<"Two parameters: "<<a<<" "<<b<<endl;
}

int main()
{
    show(5);

    show(4,6);

    return 0;
}