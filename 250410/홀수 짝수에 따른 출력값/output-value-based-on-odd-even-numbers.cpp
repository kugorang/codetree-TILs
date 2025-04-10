#include <iostream>

using namespace std;

int RecursiveCalculate(int N)
{
    if (N <= 2)
        return N;

    return RecursiveCalculate(N - 2) + N;
}

int main() {
    int N;
    cin >> N;
    
    cout << RecursiveCalculate(N);

    return 0;
}