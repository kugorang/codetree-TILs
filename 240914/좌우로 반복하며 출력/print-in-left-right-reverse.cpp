#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 1; col <= n; ++col)
            cout << ((row % 2 == 0) ? col : n + 1 - col);
        cout << endl;
    }
    return 0;
}