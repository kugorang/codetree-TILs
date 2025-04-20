#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;

    for (int i = a; i <= b; ++i)
    {
        bool isPrime = true;
        int loopEnd = sqrt(i);

        for (int j = 2; j <= loopEnd; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            sum += i;
    }

    cout << sum;

    return 0;
}