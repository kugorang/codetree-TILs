#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 2; i <= n; ++i)
    {
        bool isPrimeNum = true;
        for (int j = 2; j <= sqrt(i); ++j)
            if (i % j == 0)
            {
                isPrimeNum = true;
                break;
            }
                
        if (isPrimeNum)
            cout << i << ' ';
    }

    return 0;
}