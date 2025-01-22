#include <iostream>
using namespace std;

int main() {
    int answer = 0;

    for (int i = 0; i < 10; ++i)
    {
        string inputStr;
        cin >> inputStr;

        answer += inputStr.length();
    }

    cout << answer;

    return 0;
}