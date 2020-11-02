﻿#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <ctime>
#include <map>


using namespace std;

// Задача 1
void task4_1()
{
	setlocale(LC_ALL, "ru");
	ofstream fileOut;
	fileOut.open("filedz.txt");

	if (!fileOut.is_open()) {
		cout << "Не удалось открыть файл." << endl;
	}
	else {
		int a;
		cout << "Введите число." << endl;
		for (int i = 0; i < 10; i++)
		{
			cin >> a;
			fileOut << a << endl;
		}
	}
	fileOut.close();



	ifstream FileIn;
	FileIn.open("filedz.txt");

	if (!FileIn.is_open()) {
		cout << "не удалось открыть файл." << endl;
	}
	else {
		string str;
		int sum = 0;
		while (getline(FileIn, str)) {
			sum += stoi(str);
		}
		cout << sum << endl;
	}
	FileIn.close();
}

//Задача 2
string sign(int x) {
	if (x > 0) {
		return "Больше 0";
	}
	else if (x == 0) {
		return "Равно 0";
	}
	else if (x < 0) {
		return "Меньше 0";
	}
}

void task4_2() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	cout << sign(a) << endl;
}

// Задача 3
void triangle() {
	double a, b, c;
	cout << "Введите стороны треугольника." << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0) {
		double p = (a + b + c) / 2;
		cout << sqrt(p * (p - a) * (p - b) * (p - c)); 
	}
	else {
		cout << "Длина стороны не может быть меньше или равна нулю.";
	}
}

void rectangle() {
	cout << "Введите стороны прямоугольника." << endl;
	double a;
	cin >> a;
	double b;
	cin >> b;
	if (a > 0 && b > 0) {
		cout << a * b;
	}
	else {
		cout << "Длина стороны не может быть меньше или равна нулю.";
	}
}

void circle() {
	cout << "Введите радиус круга.\n";
	double r;
	cin >> r;
	if (r > 0) {
		
		cout << M_PI * r * r;
	}
	else {
		cout << "Длина радиуса не может быть меньше или равна нулю.";
	}
}

void task4_3()
{
	setlocale(LC_ALL, "Russian");
	int p;
	cout << "Треугольник = 0\nПрямоугольник = 1\nКруг = 2\n";
	cin >> p;
	switch (p)
	{
	case 0:
		triangle();
		break;
	case 1:
		rectangle();
		break;
	case 2:
		circle();
		break;
	default:
		cout << "Вы ввели неверное число.";
		break;
	}
}

//Задача 4
void task4_4() {
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
			cout << "* ";
		cout << "===========================\n";
	}
	for (int i = 0; i < 7; i++)
		cout << "===========================================\n";
	system("pause");
}

//Задача 5
void task4_5() {
	HWND hWnd = GetConsoleWindow();
	HDC hDC = GetDC(hWnd);
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255)); // выбираем кисть
	SelectObject(hDC, Pen);

	// ось x
	MoveToEx(hDC, 0, 170, NULL);//выбор начальной точки
	LineTo(hDC, 400, 170);  //чертеж линии от координат начальной точки к координатам конечной(400, 170)

	// ось y
	MoveToEx(hDC, 200, 0, NULL);
	LineTo(hDC, 200, 340);

	// Задаём график синуса
	for (double x = -10.0; x <= 10.0; x += 0.01) // центр - точка(200,170)
	{
		//рисование графика при перемещении Х в 0.1 и смещении У по синусоиде
		SetPixel(hDC, 20 * x + 200, -20 * sin(x) + 170, RGB(255, 255, 255));
	}
	cin.get();
}

//Задача 6
void task4_6(){
	string s;
	getline(cin, s);

	map <char, int> m;

	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;

	int res = 0;
	int tmp = 0;


	for (int i = 0; i < s.length(); i++)
	{
		if (m[s[i]] == 0)
		{
			cout << "Wrong format" << endl;
		}

		if (tmp >= m[s[i]]) // Текущий меньше предыдущего
		{
			res += m[s[i]];
		}
		else // Текущий больше предыдущего
		{
			res += m[s[i]] - tmp * 2;
		}

		tmp = m[s[i]]; // Предыдущий символ
	}

	cout << res;
}

//Задача 7
int randomize(int s, int m, int i, int c) {


	for (int k = 0; k < i - 1; k++) {
		s = (s * m + i) % c;
		cout << s << endl;
	}

	return s;
}

void task4_7()
{
	setlocale(LC_ALL, "Russian");
	int s = 1, m = 37;
	int i = 3, c = 64;

	cout << "Первый вариант = 1\nВторой вариант = 2\n";
	int p;
	cin >> p;

	switch (p)
	{
	case 1:
		cout << randomize(s, m, i, c) << endl;
		break;
	case 2:
		m = 25173;
		c = 65537;
		i = 13849;
		cout << randomize(s, m, i, c) << endl;
		break;
	default:
		cout << "Вы ввели неверное число.";
		break;
	}

}

//Задача 8
void task4_8() {
	setlocale(LC_ALL, "ru");
	// Вводим матрицу A
	double A[3][4] = {
		{5, 2, 0, 10},
		{3, 5, 2, 5},
		{20, 0, 0, 0}
	};

	// Вводим матрицу B
	double B[4][2] = {
		{1.20, 0.50},
		{2.80, 0.40},
		{5.00, 1.00},
		{2.00, 1.50}
	};

			// Вводим  матрицу С и выполняем A*B
	double C[3][2] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 4; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	}

	cout << "Доход" << "\t" << "Комиссионные" << endl;
	for (int i = 0; i < 3; i++) {
		//цикл по переменной i, в котором перебираем строки матрицы
		for (int j = 0; j < 2; j++)
			cout << C[i][j] << "\t"; //вывод очередного элемента матрицы
		cout << endl; //переход на новую строку после вывода всех элементов строки
	}

	cout << endl;
	// 1
	double min = 100000;
	double max = 0;
	int NumberSellerMax = 0;
	int NumberSellerMin = 0;
	for (int i = 0; i < 3; i++) {
		if (C[i][0] > max) {
			max = C[i][0];
			NumberSellerMax = i + 1;
		}
		if (C[i][0] < min) {
			min = C[i][0];
			NumberSellerMin = i + 1;
		}
	}

	cout << NumberSellerMax << "-й продавец заработал больше всех: " << max << endl;
	cout << NumberSellerMin << "-й продавец заработал меньше всех: " << min << endl;

	cout << endl;
	// 2
	min = 100000;
	max = 0;
	NumberSellerMax = 0;
	NumberSellerMin = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j < 2; j++) {
			if (C[i][j] > max) {
				max = C[i][j];
				NumberSellerMax = i + 1; // Добавляем единицу, т.к индекс продавца в цикле на единицу меньше чем его фактический номер
			}
			if (C[i][j] < min) {
				min = C[i][j];
				NumberSellerMin = i + 1;
			}
		}
	}

	cout << NumberSellerMax << "-й продавец заработал больше всех комиссионных: " << max << endl;
	cout << NumberSellerMin << "-й продавец заработал меньше всех комиссионных: " << min << endl;
	cout << endl;

	// 3

	double summ = 0;
	for (int i = 0; i < 3; i++) {
		summ += C[i][0];
	}

	cout << "Общая сумма вырученная с продажи: " << summ << endl;

	// 4
	double sumk = 0; // Сумма комисионных
	for (int i = 0; i < 3; i++) {
		sumk += C[i][1];
	}
	cout << "Сумма комисинных: " << sumk << endl;

	// 5

	double s = summ + sumk;
	cout << "Всего прошло денег: " << s << endl;
}

//Задача 9
void task4_9()
{
	setlocale(LC_ALL, "Ru");
	string x;
	cin >> x; // Вводим число
	int fromCC;
	cin >> fromCC; // Вводим систему счисления исходного числа
	int toCC;
	cin >> toCC; // Вводим желаемую систему счисления


	//Таблица символов исходного числа для
	//определения их порядкового номера
	string abc = "0123456789ABCDEFGHIJKLMNOPQESTUVWXYZ";
	//Промежуточная строка
	string buf = "";
	//Результирующая строка
	string result;
	int i //Это количество символов в начальном числе
		, k //Это будет порядковым номером(значением) очередного символа в входном числе
		, ten = 0 //Это будет его аналог в 10-чной системе
		, stp = 1; //А это просто степень для перевода в 10-чную



	//Узнаем сколько символов во входящем числе
	for (i = 0; x[i]; i++);

	//А потом с последнего символа начинаем переводить
	for (; i; i--) {
		//Выясняем его порядковый номер(значение)
		for (k = 0; abc[k] != x[i - 1] && k < 36; k++);

		if (k > fromCC) {
			cout << "Цифры числа не могут быть больше СС";
			exit(0);
		}
		//Умножаем его на степень, прибавляя к результирующему числу
		// в 10-тичной системе
		ten += k * stp;
		//И повышаем степень для следующего символа
		stp *= fromCC;
	}
	//После обратной формулой
	k = 0;
	while (ten) {
		//Получаем цифры числа в нужной системе
		i = ten % toCC;
		//И пишем их в буфер
		buf += abc[i];
		//Деля число на основание результирующей системы
		ten /= toCC;
	}
	//Поскольку число у нас в буффере верх ногами
	//переворачиваем строку
	reverse(buf.begin(), buf.end());
	result = buf;

	cout << result;
}

int main() {
	//task4_1();
	//task4_2();
	//task4_3();
	//task4_4();
	//task4_5();
	//task4_6();
	//task4_7();
	//task4_8();
	task4_9();

	return 0;

}