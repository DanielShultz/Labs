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

    double r = 0;
    if (a>b) {
        r = b*a+1;
    };
    if (a==b) {
        r = 3425;
    };
    if (a<b) {
        r = (2*a-5)/2;
    };

    cout << "result = " << r << "\n";
    system("pause");

    return 0;
}
