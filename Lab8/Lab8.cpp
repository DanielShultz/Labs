#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;

    cout << "n = ";
    cin >> n;

    double arr[n];

    for (int i = 0; i < n; i++) {
        cout << "element " << i << " = ";
        cin >> arr[i];
    }

    double r = 0;
    if (n>0) {
        r = arr[0];
    };

    for (int i = 1; i < n; i++) {
        if (abs(r)>(abs(arr[i]))) {
            r = arr[i];
        };
    };

    cout << "result = " << r << "\n";
    system("pause");

    return 0;
}
