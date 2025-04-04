#include <iostream>

using namespace std;

int arr[100];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < m; i++)
    {
        int a1, a2;
        cin >> a1 >> a2;

        int sum = 0;

        for (int i = a1; i <= a2; ++i)
            sum += arr[i - 1];
        
        cout << sum << endl;
    }

    return 0;
}