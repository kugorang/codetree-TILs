#include <iostream>

using namespace std;

int N;

void PrintRecusive(int n)
{
    if (n == 0)
        return;

    cout << N - n + 1 << ' ';
    PrintRecusive(n - 1);
}

void PrintReverseRecursive(int n)
{
    if (n == 0)
        return;

    cout << n << ' ';
    PrintReverseRecursive(n - 1);
}

int main() 
{
    cin >> N;

    PrintRecusive(N);
    cout << endl;
    PrintReverseRecursive(N);

    return 0;
}