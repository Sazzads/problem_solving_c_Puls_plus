#include <iostream>>
#include <conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter two Numbers: ";

    cin >> num1 >> num2;
    cout<<showpoint;
    cout<<fixed;
    cout<< setprecision(2);

    // cout<<noshowpoint;
    float sum = num1 + num2;
    cout <<setw(20)<< "the sum is: " << sum << endl;

    // cout<<noshowpoint;
    float sub = num1 - num2;
    cout <<setw(20)<< "the sub is: " << sub << endl;

    float mul = (float)num1 * num2;
    cout <<setw(20)<< "the mul is: " << mul << endl;

    double div = (float)num1 / num2;
    cout <<setw(20)<< "the div is: " << div << endl;

    // double rem = num1 % num2;
    // cout << "the rem is: " << rem << endl;
}