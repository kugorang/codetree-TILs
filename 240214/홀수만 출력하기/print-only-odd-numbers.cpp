#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum % 2 == 1 && inputNum % 3 == 0)
        {
            cout << inputNum << endl;
        }
    }

    return 0;
}