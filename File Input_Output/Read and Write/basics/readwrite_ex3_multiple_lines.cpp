#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out("rw3.txt");

    out<<"Line1"<<endl;
    out<<"Line2"<<endl;
    out<<"Line3"<<endl;

    out.close();

    ifstream in("rw3.txt");

    string line;

    while(getline(in,line)){
        cout<<line<<endl;
    }

    in.close();
}