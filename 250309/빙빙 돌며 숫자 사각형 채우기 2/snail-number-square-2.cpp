#include <iostream>

using namespace std;

int n, m;
int arr[101][101];

bool InRange(int x, int y)
{
    return (x >= 1 && x <= m && y >= 1
        && y <= n && arr[y][x] == 0);
}

int main() 
{
    cin >> n >> m;
    int loopEnd = n * m;

    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { 1, 0, -1, 0 };

    int x = 1, y = 1;
    int direction = 0;

    for (int i = 1; i <= loopEnd; ++i)
    {
        arr[y][x] = i;

        if (!InRange(x + dx[direction], y + dy[direction]))
            direction = (direction + 1) % 4;
        
        x += dx[direction];
        y += dy[direction];
    }

    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= m; ++col)
            cout << arr[row][col] << ' ';
        cout << endl;
    }

    return 0;
}