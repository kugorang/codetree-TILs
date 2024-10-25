#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int count = 0;

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N; ++col)
        {
            if (row > col)
                cout << "  ";
            else
                cout << (char)(count++ % ('Z' - 'A' + 1) + 'A') << ' ';
        }
        cout << endl;
    }
    return 0;
}