#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    float totalSum = 0;

    cout << fixed;
    cout.precision(1);

    for (int row = 0; row < 2; ++row)
    {
        float colSum = 0;

        for (int col = 0; col < 4; ++col)
        {
            cin >> arr[row][col];
            colSum += arr[row][col];
            totalSum += arr[row][col];
        }

        cout << colSum / 4 << ' ';
    }

    cout << endl;

    for (int col = 0; col < 4; ++col)
    {
        float rowSum = 0;

        for (int row = 0; row < 2; ++row)
            rowSum += arr[row][col];

        cout << rowSum / 2 << ' ';
    }

    cout << endl << totalSum / 8;

    return 0;
}