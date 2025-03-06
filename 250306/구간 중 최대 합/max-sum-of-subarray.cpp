#include <iostream>
#include <climits>

using namespace std;

int main() 
{
    int N, K;
    cin >> N >> K;

    int A[100];

    for (int i = 0; i < N; ++i)
        cin >> A[i];
    
    int maxValue = INT_MIN;

    for (int i = 0; i < N - K + 1; ++i)
    {
        int sum = 0;

        for (int j = i; j < i + K; ++j)
            sum += A[j];

        maxValue = max(maxValue, sum);
    }

    cout << maxValue;

    return 0;
}