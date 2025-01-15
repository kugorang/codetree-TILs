#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int arr[10];
    int loopEnd;
    cin >> loopEnd;

    int minValue = INT_MAX;

    for (int i = 0; i < loopEnd; ++i)
        cin >> arr[i];

    for (int i = 0; i < loopEnd - 1; ++i)
    {
        for (int j = i + 1; j < loopEnd; ++j)
        {
            int currentValue = abs(arr[i] - arr[j]);

            if (minValue > currentValue)
                minValue = currentValue;
        }
    }

    cout << minValue;

    return 0;
}