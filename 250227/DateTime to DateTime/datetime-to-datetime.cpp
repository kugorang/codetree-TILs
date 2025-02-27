#include <iostream>

using namespace std;

int main() {
    cout.tie(NULL);
    cin.tie(NULL);
    
    int a, b, c;

    cin >> a >> b >> c;

    int a2 = 11, b2 = 11, c2 = 11;
    int count = 0;

    while (!(a == a2 && b == b2 && c == c2))
    {
        ++c2;

        if (c2 == 60)
        {
            ++b2;
            c2 = 0;

            if (b2 == 24)
            {
                ++a2;
                b2 = 0;
            }
        }

        ++count;
    }

    cout << count;

    return 0;
}