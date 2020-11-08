#include <iostream>

using namespace std; 

// Задача 1
void spiner_1() {
	int A, B, C;
	int blade = 0;

	cout << "Please input spinner base cost: ";
	cin >> A;
	cout << "Please input the cost of one blade: ";
	cin >> B;
	cout << "Please input maximum cost of spinner: ";
	cin >> C;

	for (int i = 1; i < 20; i++)
	{
		if (A + B * i <= C)
		{
			blade++;
		}
	}

	cout << "The largest number of blades is: " << blade << endl;

	system("pause");
}

// Задача 2
void spiner_2() {
	int M, A[2];
	cout << "Please input number of blade: ";
	cin >> M;

	int check = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (3 * i + 4 * j == M)
			{
				cout << "Case " << ++check << endl;
				cout << "Number spinner have 3 blade: " << i << endl;
				cout << "Number spinner have 4 blade: " << j << endl;

			}

		}
	}

	if (check == 0)
	{
		cout << "Number spinner have 3 blade: 0" << endl;
		cout << "Number spinner have 4 blade: 0" << endl;
	}



	system("pause");
}

//Задача 3
int giaiThua(int n)
{
	if (n == 1 || n == 0)
		return 1;
	return n * giaiThua(n - 1);
}

void spiner_3() {
	int N, M;
	int  numberOfLine = 0, numberOfRow = 0;

	cout << "Please input first number: ";
	cin >> N;
	cout << "Please input second number: ";
	cin >> M;

	numberOfLine = (giaiThua(N + 1)) / (giaiThua(N + 1 - 2) * giaiThua(2));
	numberOfRow = (giaiThua(M + 1)) / (giaiThua(M + 1 - 2) * giaiThua(2));

	cout << "Number of rectangle is: " << numberOfLine * numberOfRow << endl;

	system("pause");
}

//Задача 4
void spiner_4() {
	int numberOfElement;
	int couple = 0;
	int baseArr[9][6] = { {1, 2, 3, 4, 53, 54},
							{5, 6, 7, 8, 51, 52},
							{9, 10, 11, 12, 49, 50},
							{13, 14, 15, 16, 47, 48},
							{17, 18, 19, 20, 45, 46},
							{21, 22, 23, 24, 43, 44},
							{25, 26, 27, 28, 41, 42},
							{29, 30, 31, 32, 39, 40},
							{33, 34, 35, 36, 37, 38}
	};

	cout << "Please input number of available seats: ";
	cin >> numberOfElement;

	int* availableSeat = new int[numberOfElement];

	for (int i = 0; i < numberOfElement; i++)
	{
		cout << "Please input seat number: ";
		cin >> *(availableSeat + i);
	}

	for (int i = 0; i < 9; i++)
	{
		int count = 0;
		for (int j = 0; j < 6; j++)
		{
			for (int z = 0; z < numberOfElement; z++)
			{
				if (baseArr[i][j] == *(availableSeat + z))
				{
					count++;

				}
			}
		}
		if (count == 6)
		{
			couple++;
		}
	}

	cout << "Number of available couple is: " << couple << endl;




	delete[] availableSeat;

	system("pause");
}

// Задча 5
int a1 = 0, a2 = 0;

double Sx(int n, int k) {

	for (int i = 0; i < k; i++) {
		if (n % 2 == 0) {
			a1 = (n / 2) - 1;
			a2 = n / 2;
			return Sx(a2, k - 1);
		}
		if (n % 2 != 0)
		{
			a1 = n / 2;
			a2 = a1;
			return Sx(a1, k - 1);
		}
	}
	return n;
}

void spiner_5() {
	int n, k;
	while (1) {
		cout << "N: "; cin >> n;
		cout << "K: "; cin >> k;
		int h = k;
		Sx(n, k);

		if (h >= 3) {
			cout << "a1: " << a1 + 1 << endl;
			cout << "a2: " << a2 + 1 << endl;
		}
		else
		{
			cout << "a1: " << a1 << endl;
			cout << "a2: " << a2 << endl;

		}

		char o;
		cout << endl << "Do you want contunue?(y/n): "; cin >> o;
		if (o == 'n')
			break;
	}
}

int main()
{
	spiner_5();
}

