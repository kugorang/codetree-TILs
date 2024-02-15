#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int multiple = 1;

    for (int i = a; i <= b; i++)
    {
        multiple *= i;
    }

    cout << multiple;

    return 0;
}