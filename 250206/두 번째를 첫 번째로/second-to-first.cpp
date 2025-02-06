#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int strLen = str.length();
    char targetCh = str[0];
    char compareCh = str[1];

    for (int i = 0; i < strLen; ++i)
        if (compareCh == str[i])
            str[i] = targetCh;

    cout << str;

    return 0;
}