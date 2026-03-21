#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("file4.txt", ios::app);

    out<<"Appending new line"<<endl;

    out.close();
}