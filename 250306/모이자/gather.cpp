#include <iostream>
#include <climits>

using namespace std;

int A[100];

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int minValue = INT_MAX;
    
    for (int i = 0; i < N; ++i)
    {
        int sum = 0;

        for (int j = 0; j < N; ++j)
        {
            if (i == j)
                continue;

            sum += (abs(j - i)) * A[j];
        }

        minValue = min(minValue, sum);
    }

    cout << minValue;

    return 0;
}