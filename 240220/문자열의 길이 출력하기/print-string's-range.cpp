#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> input;

        sum += input.length();
    }

    cout << sum;

    return 0;
}