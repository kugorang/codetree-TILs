#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int N;
    cin >> N;

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N; ++col)
        {
            if (row == 0 || col == 0)
            {
                arr[row][col] = 1;
                continue;
            }
            
            arr[row][col] = arr[row - 1][col] 
                + arr[row][col - 1] + arr[row - 1][col - 1];
        }
    }

    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N; ++col)
            cout << arr[row][col] << ' ';
        cout << endl;
    }
        
    return 0;
}