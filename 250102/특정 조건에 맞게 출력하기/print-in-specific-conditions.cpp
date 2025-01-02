#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int index = 0;
    
    for (; index < 100; ++index)
    {
        cin >> arr[index];

        if (arr[index] == 0)
            break;
    }

    for (int i = 0; i < index; ++i)
        cout << ((arr[i] % 2 == 1) ? arr[i] + 3 : arr[i] / 2) << ' ';

    return 0;
}