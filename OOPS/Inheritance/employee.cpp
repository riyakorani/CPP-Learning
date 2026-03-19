#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee() {}
};

// Creating a derived class
class Programmer : public Employee
{
public:
    int languageCode;

    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);

    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();

    return 0;
}



// class DerivedClass : visibility-mode BaseClass
// {
//     // body
// };
//    ex-
//    class Programmer : public Employee


// Visibility Mode	Effect
// public	public members stay public in derived class
// private	public members become private in derived class
// protected	public & protected become protected


// Important rules:

// 1️⃣ Default visibility mode = private
// 2️⃣ Private members of base class cannot be accessed directly in derived class
// 3️⃣ Derived class inherits base class properties.

// class A
// {
// public:
//     int x;
// };

// class B : public A
// {
// public:
//     void show()
//     {
//         cout << x;
//     }
// };