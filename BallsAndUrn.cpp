﻿#include <iostream>
#include <vector>
using namespace std;

/*
Сюжет задачи про шарики. Из урны с 10 пронумерованными шариками вынимают по одному шарику.
Подсчитать общее количество ситуаций, когда номер хотя бы одного вынутого шарика совпадает с порядковым номером действия "вынимания",
например, когда шарик № 3 будет вынут 3-им по порядку.
*/


// Глобальные переменные, объявил, чтобы не перегружать функции
int X[100]; // массив в котором лежат шарики от 1 до N (100 максимум)
unsigned c = 0; // переменная для подсчета "нужных" случаев
vector<int> arr(20); // массив в котором будут храниться перестановки и с помощью которого будем вычислять нужные нам случаи


void Swap(int a, int b)
{
	int t = X[a];
	X[a] = X[b];
	X[b] = t;
}


// Здесь идет немного измененный алгоритм вывода всех перестановок (алгоритм генерации перестановок)
/*
	Если trigger = 0, то функция просто подсчитывает количество нужных нам вариантов и выводит его(количество)
	Если trigger = 1, то функция начинает печатать все перестановки
*/
void Generate(int m, int N, int trigger)
{
	if (m == N)
	{
		if (trigger == 0) {
			// Получая очередную перестановку, помещаем её в массив
			for (int i = 0; i < N; i++) {
				arr[i] = X[i];
			}
			for (int j = 0; j < arr.size(); j++) {
				// если номер элемента совпадает с шагом, то этот случай нам подходит и мы учитываем его
				if (arr[j] == j + 1) {
					c = c + 1;
					break;
				}
			}
		}
		else {
			for (int i = 0; i < N; i++)
				cout << X[i] << " ";
			cout << endl;
		}
	}
	else
	{
		for (int j = m; j < N; j++)
		{
			Swap(m, j);
			Generate(m + 1, N, trigger);
			Swap(m, j);
		}
	}
}

int main()
{
	// Количество шаров
	int N;
	cout << "N=";
	cin >> N;

	// генерация массива с элементами от 1 до 10
	for (int i = 0; i < N; i++)
		X[i] = i + 1;

	// Вызываем наш счетчик-генератор. Trigger = 0
	Generate(0, N, 0);
	cout << c << endl;

	// Останавливаем программу и ждем нажатия любой клавиши
	system("pause");
	if (cin.get()) {
		// После нажатия клавиши выводим перестановки. Trigger = 1
		Generate(0, N, 1);
	}


}