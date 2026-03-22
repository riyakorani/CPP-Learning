#include<iostream>
using namespace std;

template<class T>
class Test{
public:
    T data;

    Test(T a){
        data = a;
    }

    void display(){
        cout<<"Value: "<<data<<endl;
    }
};

int main(){

    Test<int> obj1(10);
    Test<float> obj2(5.6);
    Test<char> obj3('A');

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}