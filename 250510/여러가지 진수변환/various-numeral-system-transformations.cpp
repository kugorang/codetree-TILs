#include <iostream>

using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    int digits[20];

    int count = 0;

    while (N > 0)
    {
        digits[count++] = N % B;
        N /= B;
    }

    for (int i = count - 1; i >= 0; --i)
        cout << digits[i];

    return 0;
}