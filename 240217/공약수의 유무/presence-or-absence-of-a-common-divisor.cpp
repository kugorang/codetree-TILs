#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int output = 0;

    for (int i = a; i <= b; i++)
    {
        if (1920 % i == 0 && 2880 % i == 0)
        {
            output = 1;
            break;
        }
    }

    cout << output;

    return 0;
}