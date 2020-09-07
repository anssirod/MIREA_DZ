#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    double x;
    double y;
    double b;
    cin >> x;
    cin >> y;
    cin >> b;
    cout << log10((b - y) * sqrt(b - x)) << endl;
    return 0;
}