#include <iostream>
using namespace std;

int arr[19][19];

bool IsRangeRow(int row, int col)
{
    if (col >= 15)
        return false;

    bool isInRange = true;
    int color = arr[row][col];

    if (color == 0)
        return false;

    for (int i = col + 1; i < col + 5; ++i)
        if (arr[row][i] != color)
            return false;
    
    return true;
}

bool IsRangeCol(int row, int col)
{
    if (row >= 15)
        return false;

    bool isInRange = true;
    int color = arr[row][col];

    if (color == 0)
        return false;

    for (int i = row + 1; i < row + 5; ++i)
        if (arr[i][col] != color)
            return false;
    
    return true;
}

bool IsRangeDiagonal(int row, int col)
{
    if (row >= 15 || col >= 15)
        return false;

    bool isInRange = true;
    int color = arr[row][col];

    if (color == 0)
        return false;

    for (int i = 1; i < 5; ++i)
        if (arr[row + i][col + i] != color)
            return false;
        
    
    return true;
}

bool IsRangeReverseDiagonal(int row, int col)
{
    if (row >= 15 || col <= 3)
        return false;

    bool isInRange = true;
    int color = arr[row][col];

    if (color == 0)
        return false;

    for (int i = 1; i < 5; ++i)
        if (arr[row + i][col - i] != color)
            return false;
    
    return true;
}

int main()
{
    for (int row = 0; row < 19; ++row)
        for (int col = 0; col < 19; ++col)
            cin >> arr[row][col];
    
    bool isFound = false;

    for (int row = 0; row < 19; ++row)
    {
        for (int col = 0; col < 19; ++col)
        {
            if (IsRangeRow(row, col))
            {
                cout << arr[row][col] << endl
                    << row + 1 << ' ' << col + 3;
                return 0;
            }

            if (IsRangeCol(row, col))
            {
                cout << arr[row][col] << endl
                    << row + 3 << ' ' << col + 1;
                return 0;
            }

            if (IsRangeDiagonal(row, col))
            {
                cout << arr[row][col] << endl
                    << row + 3 << ' ' << col + 3;
                return 0;
            }

            if (IsRangeReverseDiagonal(row, col))
            {
                cout << arr[row][col] << endl
                    << row + 3 << ' ' << col - 1;
                return 0;
            }
        }
    }

    cout << 0;

    return 0;
}