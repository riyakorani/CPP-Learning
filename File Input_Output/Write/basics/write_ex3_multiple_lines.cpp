#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("file3.txt");

    out<<"Line 1"<<endl;
    out<<"Line 2"<<endl;
    out<<"Line 3"<<endl;

    out.close();
}