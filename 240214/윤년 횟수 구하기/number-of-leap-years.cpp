#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int leapYearCount = 0;

    for (int i = 1; i <= n; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            leapYearCount++;
        }
    }

    cout << leapYearCount;

    return 0;
}