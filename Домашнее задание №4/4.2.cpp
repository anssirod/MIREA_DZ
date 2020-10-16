#include <iostream>

using namespace std;

void signDefinition(int a) {
    if (a < 0)
        cout << "Число меньше 0";
    else if (a > 0)
        cout << "Число больше 0";
    else
        cout << "Число равно 0";
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите число: \n";
    cin >> a;
    signDefinition(a);
}
