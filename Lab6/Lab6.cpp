#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n = 0;

    cout << "n = ";
    cin >> n;

    int r = 0;
    while (n>0){
        if ((((n%10)%2)==0) && ((n%10)>0)) {
            r += 1;
        };
        n /= 10;
    };


    cout << "result = " << r << "\n";
    system("pause");

    return 0;
}
