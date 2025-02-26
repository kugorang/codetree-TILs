#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int arr[100000];
    int dp[100000];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    dp[0] = arr[0];

    for (int i = 1; i < n; ++i)
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);

    sort(dp, dp + n);

    cout << dp[n - 1];

    return 0;
}
