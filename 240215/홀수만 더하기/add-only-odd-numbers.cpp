#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum % 2 == 1 && inputNum % 3 == 0)
        {
            sum += inputNum;
        }
    }

    cout << sum;

    return 0;
}