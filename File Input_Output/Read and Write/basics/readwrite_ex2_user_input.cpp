#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out("rw2.txt");

    string name;
    cout<<"Enter name: ";
    cin>>name;

    out<<name;
    out.close();

    ifstream in("rw2.txt");

    string data;
    in>>data;

    cout<<"File contains: "<<data;

    in.close();
}