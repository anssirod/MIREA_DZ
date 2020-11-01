#include <iostream> 
#include <cstdlib> 
using namespace std;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
			cout << "* ";
		cout << "===========================\n";
	}
	for (int i = 0; i < 7; i++)
		cout << "===========================================\n";
	system("pause");
	return 0;
}