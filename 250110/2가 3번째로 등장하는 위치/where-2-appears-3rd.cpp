#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; ++i)
    {
        int temp;
        cin >> temp;

        if (temp == 2)
            if (++count == 3)
            {
                cout << i;
                break;
            }           
    }

    return 0;
}