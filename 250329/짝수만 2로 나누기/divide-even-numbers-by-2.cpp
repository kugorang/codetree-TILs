#include <iostream>

using namespace std;

void Caculate(int *arr, int len)
{
    for (int i = 0; i < len; ++i)
        if (arr[i] % 2 == 0)
            arr[i] >>= 1;
}

int main() {
    int arr[50];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Caculate(arr, n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';

    return 0;
}