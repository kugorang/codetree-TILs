#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    string result = "";
    char prevCh = A[0];
    int count = 0;

    for (auto ch : A)
    {
        if (prevCh == ch)
        {
            ++count;
            continue;
        }

        result += prevCh;
        result += to_string(count);

        prevCh = ch;
        count = 1;
    }

    result += prevCh;
    result += to_string(count);

    cout << result.length() << endl << result;

    return 0;
}
