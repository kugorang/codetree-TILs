#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int row = 1; row <= n; ++row)
    {
        for (int col = n; col > 0; --col)
        {
            cout << row * col;

            if (col != 1)
                cout << ' ';
        }
            
        cout << endl;
    }
    return 0;
}