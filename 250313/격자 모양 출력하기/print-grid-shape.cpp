#include <iostream>
using namespace std;

int main() {
    int arr[11][11] = { 0, };
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i)
    {
        int r, c;
        cin >> r >> c;

        arr[r][c] = r * c;
    }

    for (int row = 1; row <= N; ++row)
    {
        for (int col = 1; col <= N; ++col)
            cout << arr[row][col] << ' ';
        cout << endl;
    }

    return 0;
}