#include <iostream>

using namespace std;

int n, m;

int LCM(int n, int m)
{
    int loopStart = max(n, m);
    int loopEnd = n * m;

    for (int i = loopStart; i < loopEnd; ++i)
    {
        if (i % n == 0 && i % m == 0)
            return i;
    }

    return loopEnd;
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << LCM(n, m);

    return 0;
}