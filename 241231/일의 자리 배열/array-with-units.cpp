#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cin >> arr[0] >> arr[1];

    cout << arr[0] << ' ' << arr[1] << ' ';

    for (int i = 2; i < 10; ++i)
    {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
        cout << arr[i] << ' ';
    }

    return 0;
}