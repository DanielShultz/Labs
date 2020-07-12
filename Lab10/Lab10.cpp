#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


double v(double a,double b, double c)
{
    return a*b*c;
}

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    double r = 0;
    r = v(a,b,c);

    cout << "result = " << r << "\n";
    system("pause");

    return 0;
}
