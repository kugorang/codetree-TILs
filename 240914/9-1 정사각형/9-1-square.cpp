#include <iostream>
using namespace std;

int main() {
    int n, value = 9;

    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            cout << value;
            value = (value > 1) ? value - 1 : 9;
        }
        cout << endl;
    }

    return 0;
}