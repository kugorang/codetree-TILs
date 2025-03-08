#include <iostream>
#include <climits>

using namespace std;

int n;

bool InRange(int x, int y)
{
    return (x >= 1 && x <= n && y >= 1 && y <= n);
}

int main() {
    int r, c;
    cin >> n >> r >> c;

    int a[101][101];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    int dx[] = { 0, 0, -1, 1 };
    int dy[] = { 1, -1, 0, 0 };

    cout << a[r][c] << ' ';

    while (true)
    {
        int currentRow = r;
        int currentCol = c;

        for (int i = 0; i < 4; ++i)
        {
            if (!InRange(r + dy[i], c + dx[i]))
                continue;

            if (a[r + dy[i]][c + dx[i]] > a[r][c])
            {
                r += dy[i];
                c += dx[i];

                cout << a[r][c] << ' ';
                break;
            }
        }

        if (currentRow == r && currentCol == c)
            break;
    }

    return 0;
}
