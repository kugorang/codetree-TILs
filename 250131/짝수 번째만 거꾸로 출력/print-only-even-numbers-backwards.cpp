#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int loopEnd = str.length();

    for (int i = loopEnd - 1; i >= 0; --i)
        if (i % 2 == 1)
            cout << str[i];

    return 0;
}