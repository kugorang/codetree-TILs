#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    int minValue = min(a, b);

    // minValue가 c보다 작을 경우
    if (minValue == min(minValue, c))
    {
        minValue = (minValue == a ? min(b, c) : min(a, c));
    }

    cout << minValue;

    return 0;
}