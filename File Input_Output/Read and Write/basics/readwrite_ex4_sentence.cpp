#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out("sentence.txt");

    string sentence="C++ file handling example";

    out<<sentence;

    out.close();

    ifstream in("sentence.txt");

    string data;

    getline(in,data);

    cout<<data;

    in.close();
}