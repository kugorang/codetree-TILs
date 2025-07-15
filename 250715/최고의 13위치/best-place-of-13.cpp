#include <iostream>
using namespace std;

int FindCoins(int *arr, int startCol)
{
    int count = 0;

    for (int col = startCol; col < startCol + 3; ++col)
        if (arr[col] == 1)
            ++count;
    
    return count;
}

int main()
{
    int N;
    cin >> N;

    int arr[20][20];

    for (int row = 0; row < N; ++row)
        for (int col = 0; col < N; ++col)
            cin >> arr[row][col];

    int maxCount = 0;

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N - 2; ++col)
        {
            int currentCount = FindCoins(arr[row], col);

            if (maxCount < currentCount)
                maxCount = currentCount;
        }
    }
    
    cout << maxCount;

    return 0;
}