#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("numbers.txt");

    int num;

    while(in>>num){
        cout<<num<<" ";
    }

    in.close();
}