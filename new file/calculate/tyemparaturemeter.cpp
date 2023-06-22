#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double F, C;
    cout << "Enter celsius: ";
    cin >> C;

    F = 1.8 * C + 32;
    cout << "Farenheit: " << F;
}