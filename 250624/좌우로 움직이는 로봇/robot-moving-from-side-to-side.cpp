#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int arrA[1000001];
    arrA[0] = 0;
    int arrAIndex = 1;

    for (int i = 0; i < N; i++)
    {
        int t;
        char d;
        
        cin >> t >> d;

        for (int j = 0; j < t; ++j)
        {
            if (d == 'L')
                arrA[arrAIndex] = arrA[arrAIndex - 1] - 1;
            else if (d == 'R')
                arrA[arrAIndex] = arrA[arrAIndex - 1] + 1;
            
            ++arrAIndex;
        }
    }

    int arrB[1000001];
    arrB[0] = 0;
    int arrBIndex = 1;

    for (int i = 0; i < M; i++)
    {
        int t;
        char d;

        cin >> t >> d;

        for (int j = 0; j < t; ++j)
        {
            if (d == 'L')
                arrB[arrBIndex] = arrB[arrBIndex - 1] - 1;
            else if (d == 'R')
                arrB[arrBIndex] = arrB[arrBIndex - 1] + 1;
            
            ++arrBIndex;
        }
    }

    int loopEnd = max(arrAIndex, arrBIndex);

    for (int i = arrAIndex; i <= loopEnd; ++i)
        arrA[i] = arrA[i - 1];
    
    for (int i = arrBIndex; i <= loopEnd; ++i)
        arrB[i] = arrB[i - 1];

    int answer = 0;

    for (int i = 1; i <= loopEnd; ++i)
        if (arrA[i] == arrB[i] && arrA[i - 1] != arrB[i - 1])
            ++answer;
    
    cout << answer;

    return 0;
}