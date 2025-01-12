#include <iostream>
using namespace std;

int main() {
    // 500 미만의 수 중 가장 큰 수
    int maxUnder500 = 1;

    // 500 초과의 수 중 가장 작은 수
    int minOver500 = 1000;

    for (int i = 0; i < 10; ++i)
    {
        int temp;
        cin >> temp;

        if (temp < 500 && temp > maxUnder500)
            maxUnder500 = temp;
        else if (temp > 500 && temp < minOver500)
            minOver500 = temp;
    }

    cout << maxUnder500 << ' ' << minOver500;

    return 0;
}