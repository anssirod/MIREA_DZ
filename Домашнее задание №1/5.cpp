#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string lamp;
    string day;
    string curtain;
    cout << "It's light outside? (yes/no)" << endl;
    cin >> day;
    cout << "Are the curtains open? (yes/no)" << endl;
    cin >> curtain;
    cout << "Is the lamp included? (yes / no)" << endl;
    cin >> lamp;
    if (lamp == "yes")
    {
        cout << "The room is light" << endl;
    }
    else
    {
        if (day == "yes" && curtain == "yes")
        {
            cout << "The room is light" << endl;
        }
        else
        {
            cout << "The room is dark" << endl;
        }
    }
    return 0;
}