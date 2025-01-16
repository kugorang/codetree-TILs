#include <iostream>
using namespace std;

int main() {
    int n1[101], n2[101];

    cin >> n1[0] >> n2[0];

    for (int i = 1; i <= n1[0]; ++i)
        cin >> n1[i];
    
    for (int i = 1; i <= n2[0]; ++i)
        cin >> n2[i];

    bool isYes = false;

    for (int i = 1; i <= n1[0]; ++i)
    {
        bool isTrue = true;

        for (int j = 1; j <= n2[0]; ++j)
        {
            if (n1[i] != n2[j])
            {
                isTrue = false;
                break;
            }
        }

        if (isTrue)
        {
            isYes = true;
            break;
        }
    }

    cout << (isYes ? "Yes" : "No");

    return 0;
}