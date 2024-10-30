#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int index;
    int numbersSum = 0;
    float numbersAverage;

    for (index = 0; index < 10; ++index)
    {
        cin >> arr[index];

        if (arr[index] >= 250)
            break;

        numbersSum += arr[index];
    }

    numbersAverage = (float)numbersSum / index;
    cout.precision(1);
    cout << fixed << numbersSum << ' ' << numbersAverage;

    return 0;
}