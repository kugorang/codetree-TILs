#include <iostream>

using namespace std;

int main() 
{
    int arr[200][200] = { 0, };

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;

        x += 100;
        y += 100;

        for (int row = y; row < y + 8; ++row)
            for (int col = x; col < x + 8; ++col)
                arr[row][col] = 1;
    }

    int count = 0;

    for (int row = 0; row < 200; ++row)
        for (int col = 0; col < 200; ++col)
            if (arr[row][col] == 1)
                ++count;
    
    cout << count;

    return 0;
}