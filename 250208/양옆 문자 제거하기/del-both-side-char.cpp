#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int strLen = str.length();

    str.erase(1, 1);
    str.erase(strLen - 3, 1);

    cout << str;

    return 0;
}