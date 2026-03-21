#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out("rw1.txt");
    out<<"Learning File Handling";
    out.close();

    ifstream in("rw1.txt");

    string data;
    getline(in,data);

    cout<<data;

    in.close();
}