#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    double x = -4;
    double y;
    cout << "Введите y: ";
    cin >> y;
    y = (pow(x, 2) - 2 * x + 2) / (x - 1);

    while (x <= 4)
    {
        cout << x << " and ";
        cout << y << endl;
        x += 0.5;
    }
    return 0;
}