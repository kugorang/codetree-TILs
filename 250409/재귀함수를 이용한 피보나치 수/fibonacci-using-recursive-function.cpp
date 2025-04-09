#include <iostream>

using namespace std;

int RecursiveFibonacci(int N)
{
    if (N <= 2)
        return 1;
    
    return RecursiveFibonacci(N - 1) + RecursiveFibonacci(N - 2);
}

int main() {
    int N;
    cin >> N;

    cout << RecursiveFibonacci(N);

    return 0;
}