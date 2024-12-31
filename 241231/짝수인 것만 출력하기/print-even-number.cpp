#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int index = 0;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int inputNum;
        cin >> inputNum;

        if (inputNum % 2 == 0)
            arr[index++] = inputNum;
    }

    for (int i = 0; i < index; ++i)
        cout << arr[i] << ' ';

    return 0;
}