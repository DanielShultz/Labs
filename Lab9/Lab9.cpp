#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;

    cout << "n = ";
    cin >> n;

    double arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            cout << "element (" << i << ',' << k << ") = ";
            cin >> arr[i][k];
        };
    };

    double r = 0;
    double r2 = 1;

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++){
            if ((arr[i][k])>0) {
                r += arr[i][k];
                r2 *= arr[i][k];
            };
        };
    };

    cout << "result = " << r << ',' << r2 << "\n";
    system("pause");

    return 0;
}
