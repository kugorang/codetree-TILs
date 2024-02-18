#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    string output = "YES";

    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            output = "NO";
            break;
        }
    }

    cout << output;

    return 0;
}