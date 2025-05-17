#include <iostream>

using namespace std;

int n, m;
char arr[100][100] = { 0, };

bool InRange(int row, int col)
{
    return row >= 0 && row < n && col >= 0 && col < m 
        && arr[row][col] == 0;
}

int main() {
    cin >> n >> m;
    
    int dx[] = { 1, 0, -1, 0 };
    int dy[] = { 0, 1, 0, -1 };

    int row = 0, col = 0, dir = 0;
    int loopEnd = n * m;

    for (int i = 0; i < loopEnd; ++i)
    {
        arr[row][col] = 'A' + (i % ('Z' - 'A' + 1));

        if (!InRange(row + dy[dir], col + dx[dir]))
            dir = (dir + 1) % 4;

        row += dy[dir];
        col += dx[dir];
    }

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
            cout << arr[row][col] << ' ';

        cout << endl;
    }

    return 0;
}
