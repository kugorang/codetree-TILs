#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    cin >> A;
    
    int ALength = A.length();
    int loopEnd = ALength >> 1;

    bool isPalindrome = true;

    for (int i = 0; i < loopEnd; ++i)
    {
        if (A[i] != A[ALength - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}