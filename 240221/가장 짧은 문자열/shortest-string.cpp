#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string inputStr;
    string longestStr;
    string shortestStr;

    cin >> inputStr;
    longestStr = inputStr;
    shortestStr = inputStr;

    for (int i = 1; i < 3; i++)
    {
        cin >> inputStr;

        if (inputStr.length() > longestStr.length())
        {
            longestStr = inputStr;
        }
        else if (shortestStr.length() > inputStr.length())
        {
            shortestStr = inputStr;
        }
    }

    cout << longestStr.length() - shortestStr.length();

    return 0;
}