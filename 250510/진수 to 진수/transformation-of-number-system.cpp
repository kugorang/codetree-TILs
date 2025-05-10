#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string n;
    cin >> n;

    int nLength = n.length();
    int decimal = 0;

    for (int i = 0; i < nLength; ++i)
        decimal += pow(a, i) * (n[nLength - 1 - i] - '0');

    int digit[20];
    int count = 0;

    while (decimal > 0)
    {
        digit[count++] = decimal % b;
        decimal /= b;
    }

    for (int i = count - 1; i >= 0; --i)
        cout << digit[i];

    return 0;
}