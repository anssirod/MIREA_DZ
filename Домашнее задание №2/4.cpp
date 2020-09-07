#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x >= 1)
    {
        for (int i = x; i < x + 9; i++)
        {

            cout << i + 1<< endl;
        }
    }
    return 0;
}