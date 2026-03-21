#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out("sample.txt");

    out<<"Hello this is file handling in C++";

    out.close();

    return 0;
}