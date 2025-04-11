#include <iostream>
#include <climits>

using namespace std;

int arr[100];

int RecursiveGetMax(int n)
{
    if (n == 0)
        return arr[n];

    return max(RecursiveGetMax(n - 1), arr[n]);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
    cout << RecursiveGetMax(n);

    return 0;
}