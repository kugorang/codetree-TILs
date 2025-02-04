#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int eeCount = 0;
    int ebCount = 0;
    int strLen = str.length();

    for (int i = 0; i < strLen; ++i)
    {
        if (str[i] == 'e')
        {
            if (str[i + 1] == 'e')
                ++eeCount;
            else if (str[i + 1] == 'b')
                ++ebCount;
        }
    }

    cout << eeCount << ' ' << ebCount;

    return 0;
}