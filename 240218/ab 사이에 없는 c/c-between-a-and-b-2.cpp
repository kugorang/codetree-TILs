#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    string output = "NO";

    for (int i = a; i <= b; i++)
    {
        if (c % i == 0)
        {
            output = "YES";
            break;
        }
    }

    cout << output;

    return 0;
}