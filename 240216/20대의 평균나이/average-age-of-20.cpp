#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int ageSum = 0, count = 0;
    int currentAge;

    do
    {
        cin >> currentAge;

        if (currentAge < 30)
        {
            ageSum += currentAge;
            count += 1;
        }
    } while (currentAge >= 20 && currentAge < 30);

    cout << fixed;
    cout.precision(2);

    cout << (float)ageSum / count;

    return 0;
}