#include <iostream>
#include <cmath>

using namespace std;

int GCD(int n, int m);

int main() {
    int n, m;
    cin >> n >> m;

    cout << GCD(n, m);

    return 0;
}

int GCD(int n, int m)
{
    int answer = 1;
    int loopEnd = min(n, m);

    for (int i = 2; i <= loopEnd; ++i)
    {
        if (n % i == 0 && m % i == 0)
            answer = i;
    }

    return answer;
}