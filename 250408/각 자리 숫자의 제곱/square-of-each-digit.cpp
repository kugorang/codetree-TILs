#include <iostream>
#include <cmath>

using namespace std;

int RecursiveEachNumPower(int N)
{
    if (N == 0)
        return 0;
    
    return RecursiveEachNumPower(N / 10) + pow(N % 10, 2);
}

int main() {
    int N;
    cin >> N;

    cout << RecursiveEachNumPower(N);

    return 0;
}