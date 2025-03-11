#include <iostream>
using namespace std;

int main() {
    int arr[15][15];

    int n;
    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col <= row; ++col)
        {
            if (col == 0 || col == row)
                arr[row][col] = 1;
            else
                arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];

            cout << arr[row][col] << ' ';
        }
        cout << endl;
    }

    return 0;
}