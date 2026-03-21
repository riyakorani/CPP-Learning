#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("file2.txt");

    string word;

    while(in>>word){
        cout<<word<<endl;
    }

    in.close();
}