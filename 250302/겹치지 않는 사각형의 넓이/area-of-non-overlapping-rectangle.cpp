#include <iostream>
using namespace std;

int main()
{
    int arr[2001][2001] = { 0, };

    // 0: A, 1: B, 2: C
    int x1[3], y1[3], x2[3], y2[3];
    
    for (int i = 0; i < 3; ++i)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += 1000;
        y1[i] += 1000;
        x2[i] += 1000;
        y2[i] += 1000;

        for (int row = y1[i]; row < y2[i]; ++row)
            for (int col = x1[i]; col < x2[i]; ++col)
                arr[row][col] = i == 2 ? 0 : 1;
    }
    
    int count = 0;
    
    for (int row = 0; row < 2001; ++row)
        for (int col = 0; col < 2001; ++col)
            if (arr[row][col] == 1)
                ++count;

    cout << count;

    return 0;
}