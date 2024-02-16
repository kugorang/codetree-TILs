#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, count = 0;

    cin >> n;

    while (n > 1)
    {
        n = (n % 2 == 0) ? (n / 2) : (3 * n + 1);

        count++;
    }

    cout << count;

    return 0;
}