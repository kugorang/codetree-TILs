#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cin >> n;

    float scoreSum = .0f;

    for (int i = 0; i < n; ++i)
    {
        float currentScore;
        cin >> currentScore;

        scoreSum += currentScore;
    }

    float scoreAverage = scoreSum / n;
    string scoreResult;

    if (scoreAverage >= 4.0f)
        scoreResult = "Perfect";
    else if (scoreAverage >= 3.0f)
        scoreResult = "Good";
    else
        scoreResult = "Poor";

    cout.precision(1);
    cout << fixed << scoreSum / n << endl << scoreResult;

    return 0;
}