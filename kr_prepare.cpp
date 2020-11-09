#include <iostream>
#include <cmath>
using namespace std;

/*
    Ряды. Задача № 28.
    Найти сумму цифр целого числа n (водится с клавиатуры)
*/
void task_1() {
    setlocale(LC_ALL, "Russian");
    int n;
    int sum = 0;

    cout << "Введите число: ";
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Сумма цифр = " << sum << endl;
}

/*
    Структурные числа. Задча "Пифагоровы числа".
    Найдите и напечатайте все пифагоровы числа в интервале [m, n].
*/

void task_2() {
        setlocale(LC_ALL, "Russian");

        int a1 = 0;
        int a2 = 0;

        cout << "Введите два числа: " << endl;
        cin >> a1 >> a2;

        if (a1 > a2)
        {
            int tmp = a2;
            a2 = a1;
            a1 = tmp;
        }

        cout << "Пифагоровы тройки чисел от "
            << a1 << " до " << a2 << " включительно:" << endl;
        for (int i = a1; i <= a2; i++)
        {
            for (int j = a1; j <= a2; j++)
            {
                for (int k = a1; k <= a2; k++)
                {
                    if (i * i + j * j == k * k)
                        cout << "{ " << i << ";" << j << ";" << k << "}" << endl;
                }
            }
       
    }
}

/*
    Файлы. Задача № 36.
    Дано целое число n (вводится с клавиатуры). Определить, входит ли цифра 3 в запись числа n^2
*/

void task_3() {
    setlocale(LC_ALL, "Russian");
    int K = 0, P = 0;
    cout << "Введите 2 числа";
    cin >> K;
    P = K * K;
    do {
        if (P % 10 == 3) {
            cout << "Цифра 3 входит в запись числа";          
        }
        P /= 10;
    } while (P > 0);
    cout << "Цифра 3 не входит в запись числа";
}

int main()
{  
    task_3();
    return 0;
}