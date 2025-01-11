#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << arr[0] << ' ' << arr[1];
    
    return 0;
}