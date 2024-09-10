#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    for (int row = 1; row <= a; ++row)
    {
        for (int col = 1; col <= b; ++col)
        {
            cout << row * col;
            if (col != b)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}