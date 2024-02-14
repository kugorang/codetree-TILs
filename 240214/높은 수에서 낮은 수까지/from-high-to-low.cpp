#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int maxNum = max(a, b);
    int minNum = min(a, b);

    for (int i = maxNum; i >= minNum; i--)
    {
        cout << i << ' ';
    }

    return 0;
}