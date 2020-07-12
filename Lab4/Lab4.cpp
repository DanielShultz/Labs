#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    double s = 0;
    double x = 0;
    double y = 0;

    cout << "size = ";
    cin >> s;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    double temp = sqrt(x*x+y*y);

    char r = 'D';
    if (temp<=s){
        r = 'C';
        if (temp<=(s/2)){
            if ((x>0)&&(y>0)){
                    r = 'A';
                };
            if ((x<0)&&(y<0)){
                    r = 'B';
                };
        };
    };

    cout << "result = " << r << "\n";
    system("pause");

    return 0;
}
