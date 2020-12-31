#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
double power (double base, int exponent)
{
    double result = 1;
    for(int i=0; i < exponent; i++)
    {
    result = result * base;
}
return result;
}
int main()
{
int base , exponent;
cout << "YO! What's the base?";
cin >> base;
cout << "What 'bout the exponent, Nigga ?";
cin >> exponent;
double myPower = power (base, exponent);
double power = pow(base, exponent);
cout << myPower;
}
