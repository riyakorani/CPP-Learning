#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("file1.txt");
    out<<"Hello this is basic file writing";
    out.close();
}