#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    int digits[17];
    int index = 0;
    
    while (n > 0)
    {
        digits[index++] = n % 2;
        n >>= 1;
    }

    for (int i = index - 1; i >= 0; --i)
        cout << digits[i];

    return 0;
}