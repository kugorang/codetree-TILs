#include <iostream>

using namespace std;

int main()
{
    int arr[2001][2001] = { 0, };

    int x1[2], y1[2];
    int x2[2], y2[2];

    for (int i = 0; i < 2; ++i)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += 1000;
        y1[i] += 1000;
        x2[i] += 1000;
        y2[i] += 1000;
    }
    
    for (int row = y1[0]; row < y2[0]; ++row)
        for (int col = x1[0]; col < x2[0]; ++col)
            arr[row][col] = 1;
    
    for (int row = y1[1]; row < y2[1]; ++row)
        for (int col = x1[1]; col < x2[1]; ++col)
            arr[row][col] = 0;

    int minX = 2001, minY = 2001;
    int maxX = -1, maxY = -1;

    for (int row = 0; row < 2001; ++row)
    {
        for (int col = 0; col < 2001; ++col)
        {
            if (arr[row][col] == 1)
            {
                minX = min(col, minX);
                minY = min(row, minY);
                maxX = max(col, maxX);
                maxY = max(row, maxY);
            }
        }
    }

    cout << (maxX - minX + 1) * (maxY - minY + 1);


    return 0;
}