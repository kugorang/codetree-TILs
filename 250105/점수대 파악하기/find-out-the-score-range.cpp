#include <iostream>
using namespace std;

int main() {
    int arr[11] = { 0, };

    while (true) {
        int inputNum;
        cin >> inputNum;

        if (inputNum == 0)
            break;

        ++arr[inputNum / 10];
    }

    for (int i = 10; i >= 1; --i)
        cout << i * 10 << " - " << arr[i] << endl;

    return 0;
}