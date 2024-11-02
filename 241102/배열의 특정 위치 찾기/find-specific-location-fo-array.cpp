#include <iostream>
using namespace std;

int main() {
    int firstSum = 0;
    float secondSum = .0f;
    int secondNumsCount = 0;

    for (int i = 1; i <= 10; ++i)
    {
        int inputNum;

        cin >> inputNum;

        if (i % 2 == 0)
            firstSum += inputNum;
        
        if (i % 3 == 0)
        {
            secondSum += inputNum;
            ++secondNumsCount;
        }
    }

    cout.precision(1);
    cout << fixed << firstSum << ' ' << secondSum / secondNumsCount;

    return 0;
}