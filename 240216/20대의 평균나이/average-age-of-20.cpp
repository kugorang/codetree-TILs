#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int ageSum = 0, count = 0;
    int currentAge;
    bool problemCondition;

    do
    {
        cin >> currentAge;

        problemCondition = currentAge >= 20 && currentAge < 30;

        if (problemCondition)
        {
            ageSum += currentAge;
            count += 1;
        }
    } while (problemCondition);

    cout << fixed;
    cout.precision(2);

    cout << (count == 0 ? 0 : (float)ageSum / count);

    return 0;
}