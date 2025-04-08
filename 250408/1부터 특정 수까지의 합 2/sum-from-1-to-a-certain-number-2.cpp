#include <iostream>

using namespace std;

int RecursiveGetSum(int N)
{
    if (N == 1)
        return 1;

    return RecursiveGetSum(N - 1) + N;
}

int main() {
    int N;
    cin >> N;

    cout << RecursiveGetSum(N);

    return 0;
}