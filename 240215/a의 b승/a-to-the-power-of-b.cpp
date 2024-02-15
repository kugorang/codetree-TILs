#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int multiple = 1;

    for (int i = 0; i < b; i++)
    {
        multiple *= a;
    }

    cout << multiple;

    return 0;
}