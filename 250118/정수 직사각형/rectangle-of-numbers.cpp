#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int n, m;

    cin >> n >> m;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 1; col <= m; ++col)
            cout << row * m + col << ' ';
        cout << endl;
    }

    return 0;
}