#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int multiple = 1;

    for (int i = 1; i <= 10 ; i++)
    {
        multiple *= i;

        if (multiple > i)
        {
            cout << i;
            break;
        }
    }

    return 0;
}