#include <iostream>
using namespace std;

int main() {
    int max;

    cin >> max;

    for (int i = 1; i < 10; ++i)
    {
        int temp;
        cin >> temp;

        if (temp > max)
            max = temp;
    }

    cout << max;
    return 0;
}