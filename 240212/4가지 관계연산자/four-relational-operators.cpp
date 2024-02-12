#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    cout << (a >= b ? 1 : 0) << endl
        << (a > b ? 1 : 0) << endl
        << (b >= a ? 1 : 0) << endl
        << (b > a ? 1 : 0);

    return 0;
}