#include <iostream>
#include <cstdlib>
using namespace std;

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
    r = (a*a + b*b - c*c + 2*a*b)/(a+b+c);

    cout << "result = " << r << "\n";
    system("pause");

    return 0;
}
