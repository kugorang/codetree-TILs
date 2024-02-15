#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int sum = n;

    for (int i = n + 1; i <= 100; i++)
    {
        sum += i;
    }

    cout << sum;

    return 0;
}