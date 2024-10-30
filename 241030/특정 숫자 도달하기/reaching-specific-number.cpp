#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int numbersSum = 0;
    float numbersAverage = .0f;

    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];

        if (arr[i] >= 250)
        {
            numbersAverage = (float)numbersSum / i;
            break;
        }

        numbersSum += arr[i];
    }
    
    cout << numbersSum << ' ' << numbersAverage;

    return 0;
}