#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int sum = 0;

    for (int row = 0; row < 4; ++row)
    {
        for (int col = 0; col < 4; ++col)
            cin >> arr[row][col];

        for (int col = 0; col <= row; ++col)
            sum += arr[row][col];
    }

    cout << sum;

    return 0;
}