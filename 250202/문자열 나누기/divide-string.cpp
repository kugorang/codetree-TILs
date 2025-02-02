#include <iostream>
using namespace std;

int main() {
    string strArr[10];

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> strArr[i];

    int wordLen = 0;
    
    for (int i = 0; i < n; ++i)
    {
        for (auto ch : strArr[i])
        {
            cout << ch;
            if (++wordLen % 5 == 0)
            {
                cout << endl;
                wordLen = 0;
            }
        }
    }

    return 0;
}