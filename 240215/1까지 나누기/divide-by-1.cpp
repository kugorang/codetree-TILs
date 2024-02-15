#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int count = 0;

    do
    {
        count += 1;
        n /= count;
    } while (n > 1);

    cout << count;

    return 0;
}