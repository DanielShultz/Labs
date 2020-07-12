#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    double x = 0;

    cout << "x = ";
    cin >> x;

    double r = 0;
    r = x*pow((log(x)),x)+x/(log(x) - 1);

    cout << "result = " << r << "\n";
    system("pause");

    return 0;
}
