#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
        {
            count += 1;
        }
    }

    cout << count;

    return 0;
}