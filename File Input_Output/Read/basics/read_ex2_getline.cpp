#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("file3.txt");

    string line;
    getline(in,line);

    cout<<line;

    in.close();
}