#include <iostream>
#include <climits>

using namespace std;

int main() 
{
    int arr[10001] = { 0, };
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++) 
    {
        int x;
        char c;
        cin >> x >> c;

        if (c == 'H')
            arr[x] = 2;
        else if (c == 'G')
            arr[x] = 1;
    }

    int maxValue = INT_MIN;

    for (int i = 1; i < 10001 - K; ++i)
    {
        int sum = 0;

        for (int j = i; j <= i + K; ++j)
            sum += arr[j];
        
        maxValue = max(maxValue, sum);
    }

    cout << maxValue;

    return 0;
}