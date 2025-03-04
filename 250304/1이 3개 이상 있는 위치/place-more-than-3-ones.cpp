#include <iostream>

using namespace std;

int n;

bool InRange(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() 
{
    cin >> n;

    int grid[100][100];

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };

    int answer = 0;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            int count = 0;

            for (int k = 0; k < 4; ++k)
            {
                if (!InRange(col + dx[k], row + dy[k]))
                    continue;

                if (grid[row + dy[k]][col + dx[k]] == 1)
                    ++count;
                
                if (count >= 3)
                {
                    ++answer;
                    break;
                }
                    
            }
        }
    }

    cout << answer;

    return 0;
}