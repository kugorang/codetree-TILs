#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;

    cin >> a;

    int b, c, d, e;

    cin >> b >> c >> d >> e;

    cout << (a > b ? 1 : 0) << endl
        << (a > c ? 1 : 0) << endl
        << (a > d ? 1 : 0) << endl
        << (a > e ? 1 : 0);

    return 0;
}