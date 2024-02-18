#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int output = 1;

    for (int i = 0; i < 5; i++)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum % 3 != 0)
        {
            output = 0;
            break;
        }
    }

    cout << output;

    return 0;
}