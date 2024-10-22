#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = n; i > 0; --i)
    {
        for (int j = n; j > 0; --j)
        {
            if (j > i)
                cout << "  ";
            else
                cout << count++ % 9 + 1 << ' ';
        }

        cout << endl;
    }
    return 0;
}