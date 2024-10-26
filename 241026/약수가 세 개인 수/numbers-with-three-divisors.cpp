#include <iostream>
using namespace std;

int main() {
    int start, end;

    cin >> start >> end;

    int answer = 0;

    for (int i = start; i <= end; ++i)
    {
        int measureCount = 0;

        for (int j = 1; measureCount <=3 && j <= start; ++j)
            if (i % j == 0)
                ++measureCount;

        if (measureCount == 3)
            ++answer;
    }

    cout << answer;

    return 0;
}