#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0, };
    int count = 100;

    while (count-- > 0) {
        int tmp;
        cin >> tmp;

        if (tmp == 0)
            break;

        ++arr[tmp / 10];
    }

    for (int i = 1; i < 10; ++i)
        cout << i << " - " << arr[i] << endl;

    return 0;
}