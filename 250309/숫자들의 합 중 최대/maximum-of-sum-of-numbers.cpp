#include <iostream>
#include <climits>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    int maxValue = INT_MIN;
    
    for (int i = X; i <= Y; ++i)
    {
        int currentNum = i;
        int sum = 0;

        while (currentNum > 0)
        {
            sum += (currentNum % 10);
            currentNum /= 10;
        }

        maxValue = max(maxValue, sum);
    }

    cout << maxValue;

    return 0;
}