#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int u[200];
    int d[200];

    for (int i = 0; i < n; ++i) 
        cin >> u[i];

    for (int i = 0; i < n; ++i) 
        cin >> d[i];

    for (int i = 0; i < t; ++i)
    {
        int temp1 = u[n - 1];
        int temp2 = d[n - 1];

        for (int i = n - 1; i > 0; --i)
        {
            u[i] = u[i - 1];
            d[i] = d[i - 1];
        }

        u[0] = temp2;
        d[0] = temp1;
    }

    for (int i = 0; i < n; ++i) 
        cout << u[i] << ' ';
    
    cout << endl;

    for (int i = 0; i < n; ++i) 
        cout << d[i] << ' ';

    return 0;
}
