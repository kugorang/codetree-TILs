#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    string t;

    cin >> n >> k >> t;

    string str[100];

    for (int i = 0; i < n; ++i)
        cin >> str[i];

    sort(str, str + n);

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (str[i].find(t) == 0)
            ++count;

        if (count == k)
        {
            cout << str[i];
            break;
        }
    }

    return 0;
}