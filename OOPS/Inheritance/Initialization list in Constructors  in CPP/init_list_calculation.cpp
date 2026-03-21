#include<iostream>
using namespace std;

class Result{
    int marks;
    int total;

public:
    Result(int m) : marks(m), total(m+10){
        cout<<"Marks = "<<marks<<endl;
        cout<<"Total = "<<total<<endl;
    }
};

int main(){
    Result r(90);
}