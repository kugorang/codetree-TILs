#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string inputStr1, inputStr2;

    cin >> inputStr1;
    cin >> inputStr2;

    int strLen1 = inputStr1.length();
    int strLen2 = inputStr2.length();

    if (strLen1 > strLen2)
    {
        cout << inputStr1 << ' ' << strLen1;
    }
    else if (strLen2 > strLen1)
    {
        cout << inputStr2 << ' ' << strLen2;
    }
    else
    {
        cout << "same";
    }

    return 0;
}