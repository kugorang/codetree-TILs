#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int x1[100], x2[100];
    int arr[201] = { 0, };

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> x1[i] >> x2[i];

        for (int j = x1[i] + 100; j <= x2[i] + 100; ++j)
            ++arr[j];
    }
        
    sort(arr, arr + 201);

    cout << arr[200];

    return 0;
}