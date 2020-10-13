#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    double m, S, n, p, r, a;
    cout << "Enter S: \n";
    cin >> S;
    cout << "Enter p \n";
    cin >> p;
    cout << "Enter n \n";
    cin >> n;
    if (n != 0) {
        r = p / 100;
        a = pow((1 + r), n);  
        m = (S * r * a) / (12 * (a - 1));
        cout << m;
    }
    else {
        cout << "Can't divide by zero";
    }
}

