#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N; ++col)
            cout << (row * N + col) % 9 + 1 << ' ';

        cout << endl;
    }

    return 0;
}