#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int arrA[1000001];
    arrA[0] = 0;
    int arrAIndex = 1;
    int totalTime = 0;

    for (int i = 0; i < N; ++i) 
    {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; ++j)
        {
            arrA[arrAIndex] = arrA[arrAIndex - 1] + v;
            ++arrAIndex;
            ++totalTime;
        }
    }
    
    int arrB[1000001];
    arrB[0] = 0;
    int arrBIndex = 1;

    for (int i = 0; i < M; ++i) 
    {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; ++j)
        {
            arrB[arrBIndex] = arrB[arrBIndex - 1] + v;
            ++arrBIndex;
        }
    }

    int answer = 0;
    int previousGap = 0;
    
    for (int i = 1; i <= totalTime; ++i)
    {
        int currentGap = arrA[i] - arrB[i];

        if ((currentGap > 0 && previousGap <= 0)
            || (currentGap < 0 && previousGap >= 0))
            ++answer;

        previousGap = currentGap;
    }

    cout << answer - 1;

    return 0;
}