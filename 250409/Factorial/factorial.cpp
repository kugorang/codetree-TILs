#include <iostream>

using namespace std;

int RecursiveFactorial(int N)
{
    if (N == 0)
        return 1;
    
    return RecursiveFactorial(N - 1) * N;
}

int main() {
    int N;
    cin >> N;
    
    cout << RecursiveFactorial(N);

    return 0;
}