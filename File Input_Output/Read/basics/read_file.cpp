#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ifstream in("sample.txt");

    string text;

    in>>text;

    cout<<text;

    in.close();

    return 0;
}