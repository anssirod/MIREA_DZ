#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>


void bubbleSort(char* i, int n)
{
	int a, b;
	char t;

	for (a = 0; a < n; a++)
		for (b = n - 1; b >= a; b--)
		{
			if (i[b - 1] > i[b])
			{
				t = i[b - 1];
				i[b - 1] = i[b];
				i[b] = t;
			}
		}

}

using namespace std;
int main()
{
	char s[80];
	gets_s(s);
	bubbleSort(s, strlen(s));
	printf(s);
	cout << endl;
	system("pause");
}

