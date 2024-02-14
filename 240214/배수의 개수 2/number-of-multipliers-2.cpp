#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int oddNum = 0;

    for (int i = 0; i < 10; i++)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum % 2 == 1)
        {
            oddNum++;
        }
    }

    cout << oddNum;

    return 0;
}