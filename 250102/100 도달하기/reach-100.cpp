#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[16] = { 1, n, 0 };

    for (int i = 2; i < 16; ++i)
    {
        arr[i] = arr[i - 2] + arr[i - 1];

        if (arr[i] > 100)
            break;
    }

    int index = 0;

    while (arr[index])
        cout << arr[index++] << ' ';

    return 0;
}