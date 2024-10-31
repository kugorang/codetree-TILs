#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int index = 0;

    while (index < 10)
    {
        cin >> arr[index];

        if (arr[index] == 0)
            break;

        ++index;
    }

    int sum = 0;

    for (int i = 0; i < index; ++i)
        sum += arr[i];

    cout.precision(1);
    cout << fixed << sum << ' ' << (float)sum / index;

    return 0;
}