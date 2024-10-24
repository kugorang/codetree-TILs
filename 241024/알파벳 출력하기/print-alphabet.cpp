#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int count = 0;
    int range = 'Z' - 'A' + 1;

    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
            cout << (char)((count++ % range) + 'A');
        cout << endl;
    }

    return 0;
}