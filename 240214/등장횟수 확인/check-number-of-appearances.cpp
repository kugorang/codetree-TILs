#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int evenCount = 0;

    for (int i = 0; i < 5; i++)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum % 2 == 0)
        {
            evenCount++;
        }
    }

    cout << evenCount;

    return 0;
}