#include <iostream>

using namespace std;

int main()
{
    int arr[100][100];
    int N, M;

    cin >> N >> M;

    int count = 0;

    for (int col = 0; col < M; ++col)
    {
        if (col % 2 == 0)
            for (int row = 0; row < N; ++row)
                arr[row][col] = count++;
        else
            for (int row = N - 1; row >= 0; --row)
                arr[row][col] = count++;
    }

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < M; ++col)
            cout << arr[row][col] << ' ';
        cout << endl;
    }
        
    return 0;
}