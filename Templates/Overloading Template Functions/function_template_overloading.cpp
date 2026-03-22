#include<iostream>
using namespace std;

template<class T>
void display(T a)
{
    cout<<"Template function: "<<a<<endl;
}

void display(int a)
{
    cout<<"Normal function: "<<a<<endl;
}

int main()
{
    display(5);      // normal function called
    display(5.6);    // template function called

    return 0;
}