#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double b;
    double c;
    cout << "Base equation is: bx + c = 0" << endl;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "You input that equation: " << b << "x + " << c << " = 0" << endl;
    if (b != 0)
    {
        cout << "Answer is: " << -(c / b) << endl;
    }
    else
    {
        cout << "You can't divide by 0";
    };

    return 0;
}