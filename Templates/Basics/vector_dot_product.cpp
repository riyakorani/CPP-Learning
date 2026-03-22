//without template--
/*
#include <iostream>
using namespace std;

class vector
{
public:
    int *arr;
    int size;

    // Constructor
    vector(int m)
    {
        size = m;
        arr = new int[size];
    }

    // Dot Product Function
    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector v1(3); // Vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector v2(3); // Vector 2
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int result = v1.dotProduct(v2);

    cout << "Dot Product: " << result << endl;

    return 0;
}
*/

//with template--

#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;

    // Constructor
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    // Dot Product Function
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3); // vector 1 with float type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3); // vector 2 with float type
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float result = v1.dotProduct(v2);

    cout << "Dot Product: " << result << endl;

    return 0;
}