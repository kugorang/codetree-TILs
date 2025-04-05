#include <iostream>

using namespace std;

void PrintStarRecursive(int n)
{
    if (n == 0)
        return;

    PrintStarRecursive(n - 1);

    for (int i = 0 ; i < n; ++i)
        cout << '*';
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    PrintStarRecursive(n);

    return 0;
}