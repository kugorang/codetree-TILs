#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    cin >> A;

    int ALength = A.length();
    int count = 0;

    for (int i = 0; i < ALength - 1; ++i)
    {
        if (A[i] == '(')
        {
            for (int j = i + 1; j < ALength; ++j)
            {
                if (A[j] == ')')
                    ++count;
            }
        }
    }

    cout << count;

    return 0;
}