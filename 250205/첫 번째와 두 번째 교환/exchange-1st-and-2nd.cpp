#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int strLen = str.length();

    char firstCh = str[0];
    char secondCh = str[1];

    for (int i = 0; i < strLen; ++i)
    {
        if (str[i] == firstCh)
            str[i] = secondCh;
        else if (str[i] == secondCh)
            str[i] = firstCh;
    }

    cout << str;

    return 0;
}