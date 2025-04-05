#include <iostream>

using namespace std;

int N;

void PrintRecusive(int n)
{
    if (n == 0)
        return;

    PrintRecusive(n - 1);
    cout << N - n + 1 << ' ';
}

void PrintReverseRecursive(int n)
{
    if (n == 0)
        return;

    PrintReverseRecursive(n - 1);
    cout << n << ' ';
}

int main() 
{
    cin >> N;

    PrintReverseRecursive(N);
    cout << endl;
    PrintRecusive(N);

    return 0;
}