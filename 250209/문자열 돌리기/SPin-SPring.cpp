#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    cout << str << endl;

    int strLen = str.length();

    for (int i = 0; i < strLen; ++i)
    {
        char lastCh = str[strLen - 1];
        str.erase(strLen - 1, 1);
        str.insert(0, 1, lastCh);

        cout << str << endl;
    }

    return 0;
}