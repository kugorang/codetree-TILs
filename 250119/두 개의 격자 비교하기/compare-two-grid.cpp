#include <iostream>
using namespace std;

int main() {
    int arr1[10][10], arr2[10][10];
    int newArr[10][10];
    int n, m;

    for (int row = 0; row < n; ++row)
        for (int col = 0; col < m; ++col)
            cin >> arr1[row][col];

    for (int row = 0; row < n; ++row)
        for (int col = 0; col < m; ++col)
            cin >> arr2[row][col];

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
        {
            newArr[row][col] = (arr1[row][col] == arr2[row][col]) ? 1 : 0;
            cout << newArr[row][col] << ' ';
        }

        cout << endl;
    }           

    return 0;
}