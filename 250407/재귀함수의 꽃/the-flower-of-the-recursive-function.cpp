#include <iostream>

using namespace std;

void Recursive(int N)
{
    if (N == 0)
        return;

    cout << N << ' ';
    Recursive(N - 1);
    cout << N << ' ';
}

int main() {
    int N;
    cin >> N;

    Recursive(N);

    return 0;
}