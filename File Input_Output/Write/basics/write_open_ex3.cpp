#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out;

    out.open("numbers.txt");

    for(int i=1;i<=10;i++){
        out<<i<<endl;
    }

    out.close();

    return 0;
}