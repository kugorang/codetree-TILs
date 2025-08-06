#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int N, H, T;
    cin >> N >> H >> T;

    int arr[N] = { 0, };

    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    
    int minValue = INT_MAX;
    
    for (int i = 0; i <= N - T; ++i)
    {
        int currValue = 0;

        for (int j = i; j < i + T; ++j)
        {
            if (j >= N)
                break;

            currValue += abs(arr[j] - H);
        }

        if (minValue > currValue)
            minValue = currValue;
    }

    cout << minValue;
    
    return 0;
}