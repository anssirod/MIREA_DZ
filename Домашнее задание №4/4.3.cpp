#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void rectangleArea() {
	double a, b;
	cout << "Нахождение площади прямоугольника." << endl;
	cout << "Введите ширину:" << endl;
	cin >> a;
	cout << "Введите высоту:" << endl;
	cin >> b;
	cout << "Площадь прямоугольника:" << endl;
	cout << a * b << endl;
}

void triangleArea() {
	double a, h;
	cout << "Нахождение площади треугольника." << endl;
	cout << "Введите основание:" << endl;
	cin >> a;
	cout << "Введите высоту:" << endl;
	cin >> h;
	cout << "Площадь треугольника:" << endl;
	cout << (a * h) / 2 << endl;
}

void circleArea() {

	double r;
	cout << "Нахождение площади круга." << endl;
	cout << "Введите радиус:" << endl;
	cin >> r;
	cout << "Площадь круга:" << endl;
	cout <<  M_PI * pow(r, 2) << endl;
}

int main()
{	
	setlocale(LC_ALL, "Russian");
	rectangleArea();
	cout << endl;
	triangleArea();
	cout << endl;
	circleArea();
	system("pause");
	return 0;
}
