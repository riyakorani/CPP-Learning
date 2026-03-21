#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string name;

    cout<<"Enter your name: ";
    cin>>name;

    ofstream out;
    out.open("file2.txt");

    out<<name<<" is learning C++";

    out.close();

    return 0;
}