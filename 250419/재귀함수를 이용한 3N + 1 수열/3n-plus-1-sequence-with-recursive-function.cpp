#include <iostream>

using namespace std;

int RecursiveGetCount(int N)
{
    if (N == 1)
        return 0;

    if (N % 2 == 0)
        return RecursiveGetCount(N >> 1) + 1;
    
    return RecursiveGetCount(N * 3 + 1) + 1;
}

int main() {
    int n;
    cin >> n;
    
    cout << RecursiveGetCount(n);

    return 0;
}