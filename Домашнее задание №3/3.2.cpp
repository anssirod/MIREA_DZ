#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int S, m, n;
	double p, r, m1, a;
	m1 = 0;
	cout << "Введите сумму кредита: ";
	cin >> S;
	cout << "Введите размер месячной выплаты: ";
	cin >> m;
	cout << "Введите кол-во лет: ";
	cin >> n;

	for (p = 1; m1 < m; p++)
	{
		r = p / 100;
		a = pow((1 + r), n);
		m1 = (S * r * a) / (12 * (a - 1));
		if (m1 > m) {
			cout << "Кредит давался под " << p << "%" << endl;
		}
	}
	system("pause");
	return 0;
}