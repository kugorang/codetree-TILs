#include <iostream>

using namespace std;

int CalculateSequence(int *A, int m)
{
    int result = 0;

    while (m >= 1)
    {
        result += A[m - 1];

        if (m % 2 == 1)
            --m;
        else
            m >>= 1;
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    int A[100];

    for (int i = 0; i < n; i++)
        cin >> A[i];
        
    cout << CalculateSequence(A, m);

    return 0;
}