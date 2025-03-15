#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;

        sum += num;
    }

    string str = to_string(sum);
    int strLength = str.length();
    char temp = str[0];

    for (int i = 0; i < strLength - 1; ++i)
        str[i] = str[i + 1];

    str[strLength - 1] = temp;

    cout << str;

    return 0;
}