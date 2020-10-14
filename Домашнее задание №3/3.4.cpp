#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {
	string line;
	ifstream myfile("C:\\ikbo-32-20\\test.txt");
	if (myfile.is_open()) {
		getline(myfile, line);
		for (int i = 0; i < line.length(); i++) {
			if (line[i] >= '0' && line[i] <= '9') {
				cout << line[i];
			}
		}
		cout << endl;
		myfile.close();
	}
	else cout << "Unable to open file";
	system("pause");
	return 0;
}