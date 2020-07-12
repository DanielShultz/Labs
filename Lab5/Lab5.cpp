#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a = 0;
    double b = 0;

    cout << "[1..5] = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    double r = 0;
    switch (a) {
    case 1:
        r = b;
        break;
    case 2:
        r = b/1000000;
        break;
    case 3:
        r = b/1000;
        break;
    case 4:
        r = b*1000;
        break;
    case 5:
        r = b*100;
        break;
    }

    cout << "result = " << r << "kg\n";
    system("pause");

    return 0;
}
