#include <iostream>
using namespace std;

int main() {
    int arr[11] = { 0, };
    int a, b;
    cin >> a >> b;

    while (a > 1)
    {
        int quionent = a / b;
        int remainder = a % b;

        a = quionent;
        ++arr[remainder];
    }

    int result = 0;

    for (int i = 0; i <= 10; ++i)
        result += (arr[i] * arr[i]);

    cout << result;

    return 0;
}