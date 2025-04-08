#include <iostream>

using namespace std;

int RecursiveUntilOne(int N)
{
    if (N == 1)
        return 0;

    if (N % 2 == 0)
        N >>= 1;
    else
        N /= 3;

    return RecursiveUntilOne(N) + 1;
}

int main() {
    int N;
    cin >> N;

    cout << RecursiveUntilOne(N);

    return 0;
}