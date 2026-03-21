#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("numbers.txt");

    for(int i=1;i<=5;i++){
        out<<i<<" ";
    }

    out.close();
}