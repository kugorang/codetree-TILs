#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int count = 0;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
            cout << (char)('A' + (count++));
        cout << endl;
    }

    return 0;
}