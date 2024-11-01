#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int arr[100];
    int arrIndex = 0;

    for (int i = 1; i <= n; ++i)
    {
        int currentNum;

        cin >> currentNum;

        if (currentNum % 2 == 0)
            arr[arrIndex++] = currentNum;
    }

    for (int i = arrIndex - 1; i >= 0; --i)
        cout << arr[i] << ' ';

    return 0;
}