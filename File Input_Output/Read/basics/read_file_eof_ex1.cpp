#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main()
{
    // declaring an object of the type ifstream
    ifstream in;

    // declaring string variable
    string st;

    // opening the file
    in.open("sample60.txt");

    // reading until end of file
    while (in.eof()==0) 
    {
        getline(in, st);
        cout << st << endl;
    }

    return 0;
}