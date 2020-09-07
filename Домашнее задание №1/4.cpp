#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double ans1;
    double ans2;
    double dis;
    cout << "Base equation is: ax^2 + bx + c = 0" << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << "You input that equation: " << a << "x^2 + " << b << "x"
         << " + " << c << " =0" << endl;
    if (a != 0)
    {
        dis = b * b - 4 * a * c;
        if (dis < 0)
        {
            cout << "Discriminant less than 0, roots are insubstantial" << endl;
        }
        else if (dis > 0)
        {
            ans1 = (-b + sqrt(dis)) / (2 * a);
            ans2 = (-b - sqrt(dis)) / (2 * a);
            cout << "Answers is: " << ans1 << " and " << ans2 << endl;
        }
        else
        {
            ans1 = -b / (2 * a);
            cout << "Answer is: " << ans1 << endl;
        }
    }
    else
    {
        if (b != 0)
        {
            cout << "Answer is: " << -(c / b) << endl;
        }
        else
        {
            cout << "The equation doesn't make sense" << endl;
        };
    }

    return 0;
}