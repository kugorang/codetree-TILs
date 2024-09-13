#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 1; col <= n; ++col)
        {
            cout << n * row + col;

            if (col < n)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}