#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    double h;  //высота
    double r1; //радиус нижнего основания
    double r2; //радиус верхнего основания
    double v;  //объем
    double l;  //образующая усеченного конуса
    cout << "Введите высоту: ";
    cin >> h;
    cout << "Введите радиус нижнего основания: ";
    cin >> r1;
    cout << "Введите радиус верхнего основания: ";
    cin >> r2;
    cout << "Введите длину образующей: ";
    cin >> l;
    cout << "Объем усеченного конуса: " << (M_PI * h * (pow(r1, 2) + r1 * r2 + pow(r2, 2))) / 3 << endl;
    cout << "Площадь полной поверхности усеченного конуса: " << M_PI * (l * r1 + l * r2 + pow(r1, 2) + pow(r2, 2)) << endl;

    return 0;
}