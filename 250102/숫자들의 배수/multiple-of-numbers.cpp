#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0, };
    int count = 0;
    int index = 0;
    
    cin >> arr[0];

    while (count < 2) {
        if (arr[index++] % 5 == 0)
            ++count;
        
        arr[index] = arr[0] * (index + 1);
    }

    for (int i = 0; i < index; ++i)
        cout << arr[i] << ' ';

    return 0;
}