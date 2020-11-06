#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <conio.h>

char mostUsed(std::string str) {
    std::vector<char> letters;

    for (int i = 0; i < str.size(); i++) {

        if (i == 0) {
            letters.push_back(str[i]);
            continue;
        }

        int no = 0;
        for (int j = 0; j < letters.size(); j++) {
            if (str[i] == letters[j])
                break;
            else {
                for (int k = 0; k < letters.size(); k++) {
                    if (str[i] != letters[k])
                        no++;
                }
            }
            if (no == letters.size())
                letters.push_back(str[i]);
        }
    }

    std::vector<int> occur(letters.size(), 0);
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < letters.size(); j++) {
            if (str[i] == letters[j])
                occur[j]++;
        }
    }

    int maxAmount = -1, maxIndex = -1;
    for (int i = 0; i < letters.size(); i++) {
        if (occur[i] > maxAmount) {
            maxAmount = occur[i];
            maxIndex = i;
        }
    }

    return letters[maxIndex];
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str;

    std::cout << "Вводите текст, а чтобы закончить ввод нажмите Enter:\n";
    std::getline(std::cin, str, '\n');

    std::cout << "\n\nСамый частый символ в вашем тексте: "
        << mostUsed(str) << std::endl;

    system("pause");
    return 0;
}