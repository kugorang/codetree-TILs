#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int A[100];

    for (int i = 0; i < n; ++i)
        cin >> A[i];
    
    sort(A, A + n);

    int B[100];

    for (int i = 0; i < n; ++i)
        cin >> B[i];
    
    sort(B, B + n);

    for (int i = 0; i < n; ++i)
    {
        if (A[i] != B[i])
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}