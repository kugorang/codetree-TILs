#include <iostream>

using namespace std;

int N;

bool InRange(int x, int y)
{
    return (x >= 1 && x <= N && y >= 1 && y <= N);
}

int main() 
{
    int arr[101][101] = { 0, };
    
    int dx[] = { 1, 0, -1, 0 };
    int dy[] = { 0, -1, 0, 1 };

    int M;
    cin >> N >> M;

    int answer = 0;

    for (int i = 0; i < M; ++i) 
    {
        int r, c;
        cin >> r >> c;

        arr[r][c] = 1;

        int count = 0;

        for (int i = 0; i < 4; ++i)
        {
            if (!InRange(r + dy[i], c + dx[i]))
                continue;

            if (arr[r + dy[i]][c + dx[i]] == 1)
                ++count;
        }
        
        cout << (count == 3 ? 1 : 0) << endl;
    }

    return 0;
}