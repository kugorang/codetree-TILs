#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int strLen = str.length();

    str[1] = 'a';
    str[strLen - 2] = 'a';

    cout << str;
        
    return 0;
}