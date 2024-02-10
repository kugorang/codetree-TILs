#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    float a;
    float b;

    cin >> c;
    cin >> a;
    cin >> b;

    cout << fixed;
    cout.precision(2);

    cout << c << endl << a << endl << b;

    return 0;
}