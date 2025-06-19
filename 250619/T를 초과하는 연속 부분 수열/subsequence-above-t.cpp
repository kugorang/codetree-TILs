#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    int maxLength = 0;
    int currLength = 0;

    for (int i = 0; i < n; ++i)
    {
        int currNum;
        cin >> currNum;

        if (currNum > t)
        {
            ++currLength;
            continue;
        }

        maxLength = max(maxLength, currLength);
        currLength = 0;
    }

    cout << max(maxLength, currLength);

    return 0;
}