#include <iostream>

using namespace std;

int RecursiveGetDigitSum(int N)
{
    if (N / 10 == 0)
        return N % 10;
    
    return (RecursiveGetDigitSum(N / 10) + N % 10);
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    cout << RecursiveGetDigitSum(a * b * c);

    return 0;
}