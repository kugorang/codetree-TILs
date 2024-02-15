#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum >= 0 && inputNum <= 200)
        {
            sum += inputNum;
            count += 1;
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << (float)sum / count;

    return 0;
}