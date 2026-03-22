#include<iostream>
using namespace std;

// Function Template
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a + b) / 2.0;
    return avg;
}

int main(){

    float a;

    a = funcAverage(5, 2);
    cout << "Average of 5 and 2 is " << a << endl;

    a = funcAverage(5, 2.8);
    cout << "Average of 5 and 2.8 is " << a << endl;

    return 0;
}