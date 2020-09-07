#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    double x;
    double a;
    cout << "Введите x:";
    cin >> x;
    cout << "Введите a:";
    cin >> a;
    if (abs(x) < 1)
    {
        cout << "Ответ: " << a * log10(abs(x)) << endl;
    }
    else
    {
        cout << "Ответ: " << sqrt(a - pow(x, 2)) << endl;
    }

    return 0;
}