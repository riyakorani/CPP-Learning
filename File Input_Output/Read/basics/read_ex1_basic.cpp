#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("file1.txt");

    string data;
    in>>data;

    cout<<data;

    in.close();
}