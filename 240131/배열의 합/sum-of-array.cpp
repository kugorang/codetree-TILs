#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4][4];

    for (int row = 0; row < 4; row++)
    {
        int rowSum = 0;

        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }

        for (int col = 0; col < 4; col++)
        {
            rowSum += arr[row][col];
        }

        cout << rowSum << endl;
    }

    return 0;
}