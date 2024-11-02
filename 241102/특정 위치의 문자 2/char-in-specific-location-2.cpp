#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; ++i)
    {
        char ch;

        cin >> ch;

        if (i == 1 || i == 4 || i == 7)
            cout << ch << ' ';
    }

    return 0;
}