#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin >> n;

    int min = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    int minCount = 0;
    
    for (int i = 0; i < n; ++i)
        if (min == arr[i])
            ++minCount;
    
    cout << min << ' ' << minCount;

    return 0;
}