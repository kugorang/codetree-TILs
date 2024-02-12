#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int middleScore, finalScore;
    int cache = 0;

    cin >> middleScore >> finalScore;

    if (middleScore >= 90)
    {
        if (finalScore >= 95)
        {
            cache = 100000;
        }
        else if (finalScore >= 90)
        {
            cache = 50000;
        }
    }

    cout << cache;

    return 0;
}