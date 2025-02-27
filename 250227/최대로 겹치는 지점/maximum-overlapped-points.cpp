#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int arr[100] = { 0, };

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;

        for (int j = x1; j <= x2; ++j)
            ++arr[j];
    }

    sort(arr, arr + 100, greater<int>());

    cout << arr[0];

    return 0;
}