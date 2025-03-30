#include <iostream>

using namespace std;

void ChangeAbsValue(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
        arr[i] = abs(arr[i]);
}

int main() {
    int n;
    cin >> n;

    int arr[50];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
    ChangeAbsValue(arr, n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';

    return 0;
}