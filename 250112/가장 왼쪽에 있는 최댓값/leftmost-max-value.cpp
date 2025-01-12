#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num[1001];

    for (int i = 1; i <= N; ++i)
        cin >> num[i];
        
    int lastIndex = N + 1;

    while (lastIndex > 1)
    {
        int max = -1;
        int loopEnd = lastIndex;

        for (int i = 1; i < loopEnd; ++i)
        {
            if (num[i] > max)
            {
                max = num[i];
                lastIndex = i;
            }
        }

        cout << lastIndex << ' ';
    }

    return 0;
}