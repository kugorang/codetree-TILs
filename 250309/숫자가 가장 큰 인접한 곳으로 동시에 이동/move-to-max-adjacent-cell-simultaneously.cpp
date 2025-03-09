#include <iostream>

using namespace std;

int n;

bool InRange(int x, int y)
{
    return (x >= 1 && x <= n && y >= 1 && y <= n);
}

int main()
{
    int m, t;
    cin >> n >> m >> t;

    int arr[21][21];
    int count[21][21] = { 0, };

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> arr[i][j];

    for (int i = 1; i <= m; ++i)
    {
        int r, c;
        cin >> r >> c;

        count[r][c] += 1;
    }

    // 상하좌우 순서
    int dx[] = { 0, 0, -1, 1 };
    int dy[] = { -1, 1, 0, 0 };

    for (int i = 0; i < t; ++i)
    {
        int tempCount[21][21] = { 0, };

        for (int row = 1; row <= n; ++row)
        {
            for (int col = 1; col <= n; ++col)
            {
                if (count[row][col] == 0)
                    continue;

                int maxValue = 0;
                int maxDir = -1;

                for (int k = 0; k < 4; ++k)
                {
                    if (!InRange(row + dy[k], col + dx[k]))
                        continue;

                    if (arr[row + dy[k]][col + dx[k]] > maxValue)
                    {
                        maxValue = arr[row + dy[k]][col + dx[k]];
                        maxDir = k;
                    }
                }

                tempCount[row + dy[maxDir]][col + dx[maxDir]] += 1;
            }
        }

        for (int row = 1; row <= n; ++row)
        {
            for (int col = 1; col <= n; ++col)
            {
                count[row][col] = tempCount[row][col];

                if (count[row][col] >= 2)
                    count[row][col] = 0;
            }
        }
    }

    int answer = 0;

    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n; ++col)
        {
            if (count[row][col] == 1)
                ++answer;
        }
    }

    cout << answer;

    return 0;
}
