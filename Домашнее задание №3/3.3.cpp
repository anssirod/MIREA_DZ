#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {
	string line;
	ofstream f;
	f.open("C:\\ikbo-32-20\\test.txt");
	f << "Hello world!";
	f.close();

	ifstream myfile("C:\\ikbo-32-20\\test.txt");
	if (myfile.is_open()) {
		getline(myfile, line);
		cout << line << endl;
		myfile.close();
	}
	else cout << "Unable to open file";
	system("pause");
	return 0;
}