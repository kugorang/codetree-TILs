#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int inputNum;

    int count = 0;

    do
    {
        cin >> inputNum;

        if (inputNum % 2 == 0)
        {
            cout << inputNum / 2 << endl;
            count++;
        }
    } while (count < 3);

    return 0;
}