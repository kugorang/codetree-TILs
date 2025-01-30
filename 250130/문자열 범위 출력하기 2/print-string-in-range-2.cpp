#include <iostream>
using namespace std;

int main() {
    string str;
    int len;

    getline(cin, str);
    cin >> len;

    int strLen = str.length();
    len = min(strLen, len);
    
    for (int i = 1; i <= len; ++i)
        cout << str[strLen - i];

    return 0;
}