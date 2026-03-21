#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out;

    out.open("paragraph.txt");

    out<<"C++ is a powerful language.\n";
    out<<"File handling allows storing data.\n";
    out<<"Practice programming daily.";

    out.close();

    return 0;
}