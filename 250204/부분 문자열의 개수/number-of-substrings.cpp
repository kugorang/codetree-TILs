#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int ALen = A.length();
    int subStrCount = 0;

    for (int i = 0; i < ALen; ++i)
    {
        bool isSubStr = true;

        for (int j = 0; j < 2; ++j)
        {
            if (A[i + j] == B[j])
                continue;
            
            isSubStr = false;
            break;
        }

        if (isSubStr)
            ++subStrCount;
    }

    cout << subStrCount;

    return 0;
}