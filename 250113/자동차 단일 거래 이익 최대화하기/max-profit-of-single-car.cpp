#include <iostream>
using namespace std;

int main() {
    int carPrices[1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> carPrices[i];

    int maxGap = 0;
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int gapValue = carPrices[j] - carPrices[i];

            if (gapValue > maxGap)
                maxGap = gapValue;
        }
    }

    cout << maxGap;

    return 0;
}