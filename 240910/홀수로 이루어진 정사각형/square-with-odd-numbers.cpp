#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            cout << 11 + row * 2 + col * 2;

            if (col != n)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}