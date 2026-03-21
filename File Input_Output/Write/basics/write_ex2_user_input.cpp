#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("file2.txt");

    string name;
    cout<<"Enter your name: ";
    cin>>name;

    out<<name<<" is learning C++";

    out.close();
}