#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out("nums.txt");

    for(int i=1;i<=10;i++){
        out<<i<<" ";
    }

    out.close();

    ifstream in("nums.txt");

    int n;

    while(in>>n){
        cout<<n<<" ";
    }

    in.close();
}