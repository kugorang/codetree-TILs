#include <iostream>
using namespace std;

int main() {
    int arr[9][9] = { 0, };

    int n, m;
    cin >> n >> m;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            int r, c;
            cin >> r >> c;

            arr[r - 1][c - 1] = 1;
        }
    }

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
            cout << arr[row][col] << ' ';
        cout << endl;
    }

    return 0;
}