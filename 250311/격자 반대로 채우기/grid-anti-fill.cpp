#include <iostream>
using namespace std;

int N;

bool InRange(int x, int y)
{
    return x >= 0 && x < N && y >= 0 && y < N;
}

int main() {
    int arr[10][10] = { 0, };

    cin >> N;
    int loopEnd = N * N;

    // 위, 왼쪽, 아래, 왼쪽
    int dx[] = { 0, -1, 0, -1 };
    int dy[] = { -1, 0, 1, 0 };

    int x = N - 1;
    int y = N - 1;
    int dir = 0;

    for (int i = 0; i < loopEnd; ++i)
    {
        arr[y][x] = i + 1;

        if (!InRange(x + dx[dir], y + dy[dir]) || dir == 1 || dir == 3)
            dir = (dir + 1) % 4;

        x += dx[dir];
        y += dy[dir];
    }

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N; ++col)
            cout << arr[row][col] << ' ';
        
        cout << endl;
    }

    return 0;
}