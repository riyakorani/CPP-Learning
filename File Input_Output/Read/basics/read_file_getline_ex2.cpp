#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream in("sample60.txt");
    string st;

    while(getline(in, st)){
        cout<<st<<endl;
    }

    return 0;
}