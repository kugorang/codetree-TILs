#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << fixed;
    cout.precision(2);

    cout << (float)(a + b) / (a - b);

    return 0;
}