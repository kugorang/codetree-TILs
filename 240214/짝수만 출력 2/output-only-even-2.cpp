#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> b >> a;

    int i = b;

    while (i >= a)
    {
        // a, b는 짝수라는 문제 조건이 있음
        cout << i << ' ';
        i -= 2;
    }

    return 0;
}