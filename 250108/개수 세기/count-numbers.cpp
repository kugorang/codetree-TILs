#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int arr[101] = { 0, };
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;

        ++arr[temp];
    }

    cout << arr[m];

    return 0;
}