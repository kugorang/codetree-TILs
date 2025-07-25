#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int arr[101] = { 0, };
    
    for (int i = 0; i < N; ++i)
    {
        int candiesCount, bucketPos;
        cin >> candiesCount >> bucketPos;

        arr[bucketPos] += candiesCount;
    }

    int maxCount = -1;
    int answer = -1;

    for (int c = 0; c <= 100; ++c)
    {
        int currentCount = 0;

        for (int i = c - K; i <= c + K; ++i)
        {
            if (i < 0 || i > 100)
                continue;
            
            currentCount += arr[i];
        }

        if (currentCount > maxCount)
        {
            maxCount = currentCount;
            answer = c;
        }
    }

    cout << maxCount;

    return 0;
}