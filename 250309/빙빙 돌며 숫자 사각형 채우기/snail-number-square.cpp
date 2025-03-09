#include <iostream>

using namespace std;

int n, m;
int arr[101][101];

bool IsRange(int x, int y)
{
    return (x >= 1 && x <= m && y >= 1 && y <= n
        && arr[y][x] == 0);
}

int main() 
{
    cin >> n >> m;

    int dx[] = { 1, 0, -1, 0 };
    int dy[] = { 0, 1, 0, -1 };

    int x = 1, y = 1;
    int direction = 0;

    for (int i = 1 ; i <= n * m; ++i)
    {
        arr[y][x] = i;

        if (!IsRange(x + dx[direction], y + dy[direction]))
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