#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int threeMultipleNum = 0;
    int fiveMultipleNum = 0;

    for (int i = 0; i < 10; i++)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum % 3 == 0)
        {
            threeMultipleNum++;
        }

        if (inputNum % 5 == 0)
        {
            fiveMultipleNum++;
        }
    }

    cout << threeMultipleNum << ' ' << fiveMultipleNum;

    return 0;
}