#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


long double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

int main()
{
    int n = 0;
    long double e = M_E;

    cout << "n = ";
    cin >> n;

    long double r = 0;
    for (int i = 0; i<n; i++){
    r += 1/(fact(i));
    };

    e -= r;

    cout << "result = " << r << "\n";
    cout << "(+-) result = " << e << "\n";
    system("pause");

    return 0;
}
