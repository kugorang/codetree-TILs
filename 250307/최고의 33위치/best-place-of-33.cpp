#include <iostream>

using namespace std;

int N;

bool InRange(int x, int y)
{
    return (x >= 0 && x + 2 < N && y >= 0 && y + 2 < N);
}

int main() {
    cin >> N;

    int grid[20][20];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> grid[i][j];

    int maxValue = 0;

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N; ++col)
        {
            if (!InRange(row, col))
                continue;

            int count = 0;
            
            for (int i = row; i < row + 3; ++i)
                for (int j = col; j < col + 3; ++j)
                    if (grid[i][j] == 1)
                        ++count;
            
            maxValue = max(maxValue, count);
        }
    }

    cout << maxValue;

    return 0;
}
