#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int totalTime = 0;

    // A
    int arrA[1000000] = { -1, };
    arrA[0] = 0;

    int arrAIndex = 1;

    for (int i = 0; i < n; ++i) 
    {
        char d;
        int t;
        cin >> d >> t;
        
        for (int j = 0; j < t; ++j)
        {
            if (d == 'L')
                arrA[arrAIndex] = arrA[arrAIndex - 1] - 1;
            else // d == 'R'
                arrA[arrAIndex] = arrA[arrAIndex - 1] + 1;

            ++arrAIndex;
            ++totalTime;
        }
    }

    // B
    int arrB[1000000] = { -1, };
    arrB[0] = 0;

    int arrBIndex = 1;

    for (int i = 0; i < m; ++i) 
    {
        char d;
        int t;
        cin >> d >> t;
        
        for (int j = 0; j < t; ++j)
        {
            if (d == 'L')
                arrB[arrBIndex] = arrB[arrBIndex - 1] - 1;
            else // d == 'R'
                arrB[arrBIndex] = arrB[arrBIndex - 1] + 1;

            ++arrBIndex;
        }
    }

    int i = 1;

    while (i <= totalTime)
    {
        if (arrA[i] == arrB[i])
        {
            cout << i;
            break;
        }

        ++i;
    }

    if (i > totalTime)
        cout << -1;

    return 0;
}