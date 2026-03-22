#include<iostream>
using namespace std;

template <class T>
class MyClass{
    public:
        T data;

        MyClass(T a){
            data = a;
        }

        void display(){
            cout << data << endl;
        }
};

int main(){

    MyClass<int> obj1(5);
    MyClass<float> obj2(5.67);
    MyClass<char> obj3('A');

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}