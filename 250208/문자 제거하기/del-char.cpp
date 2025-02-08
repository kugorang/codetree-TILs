#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int strLen = str.length();

    while (strLen > 1)
    {
        int index;
        cin >> index;

        if (index >= strLen)
            str.erase(strLen - 1, 1);
        else
            str.erase(index, 1);
        
        cout << str << endl;

        --strLen;
    }

    return 0;
}