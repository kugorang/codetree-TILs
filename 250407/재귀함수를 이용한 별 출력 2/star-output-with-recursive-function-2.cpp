#include <iostream>

using namespace std;

void RecursivePrintStart(int n)
{
    if (n == 0)
        return;

    for (int i = 0; i < n; ++i)
        cout << "* ";
    cout << endl;

    RecursivePrintStart(n - 1);

    for (int i = 0; i < n; ++i)
        cout << "* ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    RecursivePrintStart(n);

    return 0;
}