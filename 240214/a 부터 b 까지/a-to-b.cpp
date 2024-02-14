#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    while (a < b)
    {
        cout << a << ' ';

        if (a % 2 == 1)
        {
            a *= 2;
        }
        else    // 짝수일 때
        {
            a += 3;
        }
    }

    cout << a;

    return 0;
}