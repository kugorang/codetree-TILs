#include <iostream>

using namespace std;

int RecursiveGetMultiplyValue(int N)
{
    if (N == 1)
        return 2;

    if (N == 2)
        return 4;

    return RecursiveGetMultiplyValue(N - 1) * RecursiveGetMultiplyValue(N - 2) % 100;
}

int main() {
    int N;
    cin >> N;

    cout << RecursiveGetMultiplyValue(N);

    return 0;
}