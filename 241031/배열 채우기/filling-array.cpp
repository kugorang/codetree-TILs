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

    for (int i = index - 1; i >= 0; --i)
        cout << arr[i] << ' ';

    return 0;
}