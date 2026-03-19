#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
public:
    int add(int a,int b){
        return a+b;
    }
};

class ScientificCalculator{
public:
    double squareRoot(int x){
        return sqrt(x);
    }
};

class SmartCalculator : public SimpleCalculator, public ScientificCalculator{
};

int main(){

    SmartCalculator calc;

    cout<<"Addition = "<<calc.add(5,3)<<endl;
    cout<<"Square root = "<<calc.squareRoot(16)<<endl;

    return 0;
}





// #include<iostream>
// #include<cmath>
// using namespace std;

// class SimpleCalculator{
// protected:
//     int a, b;

// public:
//     void setNumbers(int x, int y){
//         a = x;
//         b = y;
//     }

//     void showAddition(){
//         cout<<"Addition = "<<a + b<<endl;
//     }
// };

// class ScientificCalculator{
// protected:
//     int n;

// public:
//     void setNumber(int x){
//         n = x;
//     }

//     void showSquareRoot(){
//         cout<<"Square Root = "<<sqrt(n)<<endl;
//     }
// };

// class SmartCalculator : public SimpleCalculator, public ScientificCalculator{
// public:
//     void display(){
//         showAddition();
//         showSquareRoot();
//     }
// };

// int main(){

//     SmartCalculator calc;

//     calc.setNumbers(5,3);
//     calc.setNumber(16);

//     calc.display();

//     return 0;
// }