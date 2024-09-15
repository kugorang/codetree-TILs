#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 0; col < n; ++col)
            cout << ((col % 2) ? n + 1 - row : row);
        cout << endl;
    }
    return 0;
}