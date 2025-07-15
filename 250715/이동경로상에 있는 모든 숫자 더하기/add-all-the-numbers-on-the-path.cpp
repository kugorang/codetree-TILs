#include <iostream>
#include <string>

using namespace std;

int N;

bool IsSafeArea(int col, int row)
{
    return col >= 0 && col < N && row >= 0 && row < N;
}

int main()
{
    int T;
    string str;

    cin >> N >> T >> str;

    int arr[99][99];

    for (int row = 0; row < N; ++row)
        for (int col = 0; col < N; ++col)
            cin >> arr[row][col];
        
    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { -1, 0, 1, 0 };
    int rowPos = N / 2, colPos = N / 2, dir = 0;

    int answer = 0;
    
    for (const char &ch : str)
    {
        if (ch == 'L')
        {
            if (--dir < 0)
                dir = 3;
            continue;
        }
            
        if (ch == 'R')
        {
            dir = (dir + 1) % 4;
            continue;
        }            

        if (!IsSafeArea(colPos + dx[dir], rowPos + dy[dir]))
            continue;

        if (ch == 'F')
        {
            answer += arr[rowPos][colPos];

            rowPos += dy[dir];
            colPos += dx[dir];
        }
    }

    if (IsSafeArea(colPos, rowPos) && str[T - 1] == 'F')
        answer += arr[rowPos][colPos];

    cout << answer;

    return 0;
}