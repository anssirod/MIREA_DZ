#include <exception>
#include <string>
#include <iostream>
using namespace std;

namespace Roman
{
	int ToInt(char c)
	{
		switch (c)
		{
		case 'I':  return 1;
		case 'V':  return 5;
		case 'X':  return 10;
		case 'L':  return 50;
		case 'C':  return 100;
		case 'D':  return 500;
		case 'M':  return 1000;
		}
		throw exception("Invalid character");
	}

	int ToInt(const string& s)
	{
		int retval = 0, pvs = 0;
		for (auto pc = s.rbegin(); pc != s.rend(); ++pc)
		{
			const int inc = ToInt(*pc);
			retval += inc < pvs ? -inc : inc;
			pvs = inc;
		}
		return retval;
	}
}

int main(int argc, char* argv[])
{
	string number;
	cin >> number;
	cout << Roman::ToInt(number);

}
