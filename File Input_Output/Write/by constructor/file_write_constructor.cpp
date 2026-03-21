#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Harry bhai";

    // Opening file using constructor
    ofstream out("sample60.txt"); // Write operation

    out << st;

    return 0;
}