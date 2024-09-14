#include <iostream>
using namespace std;

int main() {
    int n, value = 2;

    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            cout << value << ' ';
            value = (value + 2 >= 10) ? 2 : value + 2;
        }
        cout << endl;
    }
    return 0;
}