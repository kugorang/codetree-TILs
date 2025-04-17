#include <iostream>

using namespace std;

int RecursiveSequence(int N)
{
    if (N <= 2)
        return N;

    return RecursiveSequence(N / 3) + RecursiveSequence(N - 1);
}

int main() {
    int N;
    cin >> N;

    cout << RecursiveSequence(N);

    return 0;
}