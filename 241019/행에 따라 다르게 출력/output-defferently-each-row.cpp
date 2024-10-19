#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nowNum = 0;

    for (int row = 0; row < n; ++row)
    {
        int increaseValue = (row % 2 == 0) ? 1 : 2;

        for (int col = 0; col < n; ++col)
        {
            nowNum += increaseValue;
            cout << nowNum << ' ';
        }
        cout << endl;
    }

    return 0;
}