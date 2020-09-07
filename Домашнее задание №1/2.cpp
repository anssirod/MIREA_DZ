#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum of 2 numbers: " << a + b << endl;
    cout << "Difference of 2 numbers: " << a - b << endl;
    cout << "Product of 2 numbers: " << a * b << endl;
    if (b != 0)
    {
        cout << "Quotient of 2 numbers: " << a / b << endl;
    }
    else
    {
        cout << "You can't divide by 0";
    }
    return 0;
}