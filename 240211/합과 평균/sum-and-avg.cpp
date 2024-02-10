#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int sum = a + b;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (float)sum / 2;

    return 0;
}