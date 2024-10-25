#include <iostream>
using namespace std;

int main() {
    int m;

    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        int n;

        cin >> n;

        int count = 0;

        while (n != 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;

            ++count;
        }

        cout << count << endl;
    }

    return 0;
}