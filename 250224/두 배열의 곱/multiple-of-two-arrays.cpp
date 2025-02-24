#include <iostream>
using namespace std;

int main() {
    int arr1[3][3], arr2[3][3];

    for (int row = 0; row < 3; ++row)
        for (int col = 0; col < 3; ++col)
            cin >> arr1[row][col];

    for (int row = 0; row < 3; ++row)
        for (int col = 0; col < 3; ++col)
            cin >> arr2[row][col];
    
    for (int row = 0; row < 3; ++row)
    {
        for (int col = 0; col < 3; ++col)
            cout << arr1[row][col] * arr2[row][col] << ' ';
        
        cout << endl;
    }

    return 0;
}