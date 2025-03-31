#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string A;

    cin >> A;

    sort(A.begin(), A.end());

    int loopEnd = A.length();

    bool isAnswer = false;

    for (int i = 0; i < loopEnd - 1; ++i)
    {
        if (A[i] != A[i + 1])
        {
            isAnswer = true;
            break;
        }
    }

    if (isAnswer)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}