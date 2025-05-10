#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string N;
    cin >> N;
    
    int NLen = N.length();
    int decimal = 0;

    for (int i = 0; i < NLen; ++i)
        decimal += pow(2, i) * (N[NLen - 1 - i] - '0');

    decimal *= 17;

    int digits[20];
    int count = 0;

    while (decimal > 0)
    {
        digits[count++] = decimal % 2;
        decimal >>= 1;
    }

    for (int i = count - 1; i >= 0; --i)
        cout << digits[i];

    return 0;
}