#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x = 3;
    int y = 2;

    x += y; // x=x+y
    cout << "x += y operator: " << x<<endl;

    // here x=5, y=2
    x -= y; // x=x-y
    cout << "x -= y operator: " << x<<endl;

    // here x=3, y=2
    x *= y; // x=x*y
    cout << "x *= y operator: " << x<<endl;
}