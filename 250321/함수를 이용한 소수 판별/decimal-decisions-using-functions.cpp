#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int sum = 0;
    
    for (int i = a; i <= b; ++i)
    {
        int loopEnd = sqrt(i);
        bool isPrime = true;

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