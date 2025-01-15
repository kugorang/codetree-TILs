#include <iostream>
using namespace std;

int main() {
    for (int row = 0; row < 5; ++row)
    {
        for (int col = 0; col < 3; ++col)
        {
            char temp;
            cin >> temp;

            cout << (char)(temp - ('a' - 'A')) << ' ';
        }

        cout << endl;
    }

    return 0;
}