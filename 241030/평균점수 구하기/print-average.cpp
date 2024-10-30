#include <iostream>
using namespace std;

int main() {
    float scoreSum = .0f;

    for (int i = 0; i < 8; ++i)
    {
        float currentScore;

        cin >> currentScore;

        scoreSum += currentScore;
    }

    cout.precision(1);
    cout << fixed << scoreSum / 8;

    return 0;
}