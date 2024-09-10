#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int row = n; row > 0; --row)
    {
        for (int col = n; col > 0; --col)
        {
            cout << col;

            if (col != 0)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}