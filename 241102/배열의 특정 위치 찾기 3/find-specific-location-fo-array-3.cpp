#include <iostream>
using namespace std;

int main() {
    int arr[100];

    for (int i = 0; i < 100; ++i)
    {
        cin >> arr[i];

        if (arr[i] != 0)
            continue;

        int result = 0;

        for (int j = i - 1; j >= i - 3; --j)
            result += arr[j];

        cout << result;
        break;
    }

    return 0;
}